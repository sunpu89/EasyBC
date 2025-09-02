//
// Created by Administrator on 2025/9/3.
//
#include "easybc/handlers/AnalysisHandler.h"
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <memory>
#include <cassert>
#include <ctime>

// 包含所有必需的内部头文件
#include "easybc/core/ASTNode.h"
#include "easybc/core/Value.h"
#include "easybc/frontend/Interpreter.h"
#include "easybc/frontend/Transformer.h"
#include "easybc/analysis/differential/DiffSBMILP.h"
#include "easybc/analysis/differential/DiffSWMILP.h"
#include "easybc/interpreter/semanticInter.h"
#include "easybc/core/Globals.h"

// 声明在其他地方定义的全局函数/类
void MILPMGR(std::vector<std::string> params);
std::vector<double> EasyBCInterpreterDebug(std::vector<std::string> params);

namespace easybc {
    namespace handlers {

/**
 * @brief 执行密码分析任务的静态方法。
 * @param config 包含所有分析任务配置的结构体。
 */
        void AnalysisHandler::execute(const AnalysisConfig& config) {
            std::cout << "--- Cryptanalysis Task ---" << std::endl;
            std::cout << "Benchmark File: " << config.benchmarkPath << std::endl;
            std::cout << "Mode: " << config.mode << ", Target: " << config.target << std::endl;
            std::cout << "Rounds: " << config.startRound << " to " << config.endRound << std::endl;

            // 将配置结构体转换为旧函数所需的vector<string>格式
            std::vector<std::string> params;
            // 参数数量是动态的，这里先添加已知参数
            params.push_back(std::to_string(9)); // 默认参数数量，可动态调整
            params.push_back(config.benchmarkPath);
            params.push_back(config.mode);
            params.push_back(config.target);
            params.push_back(std::to_string(config.reductionMethod));
            params.push_back("startRound");
            params.push_back(std::to_string(config.startRound));
            params.push_back("endRound");
            params.push_back(std::to_string(config.endRound));
            // ... 此处可以添加逻辑来处理 timer, threadsNum 等其他参数 ...

            // 调用原有的核心逻辑函数
            MILPMGR(params);

            std::cout << "--- Cryptanalysis Task Finished ---" << std::endl;
        }

    } // namespace handlers
} // namespace easybc


/**
 * @brief (原有函数) MILP密码分析任务管理器。
 * @details 从旧main.cpp迁移而来。这是整个分析流程的核心，
 * 负责调用词法/语法分析器，构建AST，进行转换，并最终
 * 启动基于MILP的差分分析。
 * @param params 包含所有分析参数的字符串向量。
 */
void MILPMGR(std::vector<std::string> params) {
    /*
     * argv[0] -> the number of parameters
     * argv[1] -> EasyBC implementation file path;
     * argv[2] -> word-wise or bit-wise or extended bit-wise
     * techChoose = "w" -> word-wise
     * techChoose = "b" -> bit-wise
     * techChoose = "d" -> extended bit-wise
     * the modeling mode for S-boxes, same as the "case 1", is depended on "w", "b" or "d"
     * argv[3] -> "cryptanalysis" or "evaluation"
     * argv[4] -> reduction methods for S-boxes; same as the "case 1";
     *
     * optional parameters :
     * argv[5]/argv[7]/argv[9]/argv[11]/argv[13]/argv[15]
     * -> startRound or allRounds or timer(second) or threadsNum or totalRoundNum or evaluationSize
     * argv[6]/argv[8]/argv[10]/argv[12]/argv[14]/argv[16]
     * -> startRound or allRounds or timer(second) or threadsNum or totalRoundNum or evaluationSize
     * */
    std::string filePath = params[1];
    yyin = fopen(filePath.c_str(), "r");
    if (!yyin) {
        // 在工业级代码中，这里应该抛出异常而不是assert
        std::cerr << "Error: Wrong Path : \n" << filePath << std::endl;
        assert(false);
    }
    yydebug = 0;
    yylineno = 1;
    std::vector<ProcValuePtr> res;
    Interpreter interpreter;
    if (!yyparse()) {
        std::cout << "Parsing complete\n" << std::endl;
    } else {
        std::cerr << "Hint : wrong syntax at line " << yylineno << std::endl;
        assert(false);
    }
    interpreter.generateCode(*programRoot);
    res = interpreter.getProcs();

    Transformer transformer(res);
    transformer.transformProcedures();

    int startRound = 1, endRound = 10, timer = 3600 * 24, threadsNum = 16, totalRoundNum = 0;
    int evaluationSize = 0;
    // 注意：原代码的参数数量是硬编码的，这里我们动态解析
    for (size_t i = 5; i < params.size(); i = i + 2) {
        if (params[i] == "startRound") {
            startRound = std::stoi(params[i + 1]);
        } else if (params[i] == "endRound") {
            endRound = std::stoi(params[i + 1]);
        } else if (params[i] == "timer") {
            timer = std::stoi(params[i + 1]);
        } else if (params[i] == "threadsNum") {
            threadsNum = std::stoi(params[i + 1]);
        } else if (params[i] == "totalRoundNum") {
            totalRoundNum = std::stoi(params[i + 1]);
        } else if (params[i] == "evaluationSize") {
            evaluationSize = std::stoi(params[i + 1]);
        } else {
            std::cerr << "Unknown parameter: " << params[i] << std::endl;
            assert(false);
        }
    }

    std::string sboxModelingMode;
    if (params[2] == "w" or params[2] == "b") sboxModelingMode = "AS";
    else if (params[2] == "d") sboxModelingMode = "DC";
    else {
        std::cerr << "the fourth argument should be 'w', 'b' or 'd' !" << std::endl;
        assert(false);
    }

    if (params[3] == "evaluation" and totalRoundNum == 0) {
        std::cerr << "the parameters 'totalRoundNum' should be given when the target is 'evaluation' !" << std::endl;
        assert(false);
    }

    if (params[2] == "w") {
        DiffSWMILP sw(transformer.getProcedureHs(), params[3]);
        sw.setGurobiTimer(timer);
        sw.setGurobiThreads(threadsNum);
        sw.setStartRound(startRound);
        sw.setEndRound(endRound);
        if (params[3] == "cryptanalysis") {
            sw.setILP();
        }
        if (evaluationSize != 0)
            sw.setEvaluationSize(evaluationSize);
        sw.setTotalRoundNum(totalRoundNum);
        sw.MGR();
    }
        // bit-wise or extended bit-wise
    else if (params[2] == "b" or params[2] == "d") {
        DiffSBMILP sb(transformer.getProcedureHs(), params[3], sboxModelingMode, std::stoi(params[4]));
        sb.setGurobiTimer(timer);
        sb.setGurobiThreads(threadsNum);
        sb.setStartRound(startRound);
        sb.setEndRound(endRound);
        if (params[3] == "cryptanalysis") {
            sb.setSpeedUp1();
            sb.setSpeedUp2();
            sb.setILP();
        }
        if (evaluationSize != 0)
            sb.setEvaluationSize(evaluationSize);
        sb.setTotalRoundNum(totalRoundNum);
        sb.MGR();
    } else {
        std::cerr << "the fourth argument should be 'w', 'b' or 'd' !" << std::endl;
        assert(false);
    }
}

/**
 * @brief (原有函数) EasyBC解释器核心调试函数。
 * @details 从旧main.cpp迁移而来。此函数负责解析一个具体的测试用例，
 * 设置明文、密钥，运行解释器，并返回加密时间。
 * 它与MILPMGR共享了AST解析的前半部分流程。
 * @param params 包含单个测试用例所有参数的字符串向量。
 * @return 一个包含[clock_time, time_time]的double向量。
 */
std::vector<double> EasyBCInterpreterDebug(std::vector<std::string> params) {
    /*
     * argv[0] -> EasyBC implementation file path;
     * argv[1] -> "plaintext"
     * argv[2] -> the value of plaintext in binary
     * argv[3] -> "subkey"
     * argv[4] -> the subkey size
     * argv[5]~ -> the value of subkeys
     * */
    std::string filePath = params[0];
    yyin = fopen(filePath.c_str(), "r");
    if (!yyin) {
        std::cerr << "Wrong Path : \n" << filePath << std::endl;
        assert(false);
    }
    yydebug = 0;
    yylineno = 1;
    std::vector<ProcValuePtr> res;
    Interpreter interpreter;
    if (!yyparse()) {
        std::cout << "Parsing complete\n" << std::endl;
    } else {
        std::cerr << "Hint : wrong syntax at line " << yylineno << std::endl;
        assert(false);
    }

    interpreter.generateCode(*programRoot);
    res = interpreter.getProcs();

    for (auto& array : interpreter.getblockStack()[0]->env) {
        if (array.second->getValueType() == VTArrayValue) {
            ArrayValue *arrayV = dynamic_cast<ArrayValue *>(array.second.get());
            std::vector<int> arrayEle;
            for (auto& ele : arrayV->getArrayValue()) {
                auto* concreteNumValue = dynamic_cast<ConcreteNumValue*>(ele.get());
                arrayEle.push_back(concreteNumValue->getNumer());
            }
            allBox[array.first] = arrayEle;
        }
    }

    Transformer transformer(res);
    transformer.transformProcedures();

    std::string plaintextStr = params[2].substr(2, params[2].size()-2);
    std::vector<int> plaintext;
    for (auto p : plaintextStr) {
        if (p == '1')
            plaintext.push_back(1);
        else if (p == '0')
            plaintext.push_back(0);
    }

    int subKeySize = std::stoi(params[4]);
    std::vector<std::vector<int>> subKeys;
    for (size_t i = 5; i < params.size() - 2; ++i) {
        std::string subkeyStr = params[i].substr(2, params[i].size()-2);
        std::string preZeroBits;
        for (size_t j = subkeyStr.size(); j < subKeySize; ++j) {
            preZeroBits += "0";
        }
        subkeyStr = preZeroBits + subkeyStr;

        std::vector<int> subkeyBit;
        for (auto k : subkeyStr) {
            if (k == '1')
                subkeyBit.push_back(1);
            else if (k == '0')
                subkeyBit.push_back(0);
        }
        subKeys.push_back(subkeyBit);
    }

    std::vector<int> ciphertext;
    std::string ciphertextStr = params[params.size()-1];
    for (auto c : ciphertextStr) {
        if (c == '1')
            ciphertext.push_back(1);
        else if (c == '0')
            ciphertext.push_back(0);
    }

    EasyBCInter easyBcInter(transformer.getProcedureHs(), plaintext, subKeys);

    clock_t startTime, endTime;
    startTime = clock();
    time_t star_time = 0, end_time;
    star_time = time(NULL);

    easyBcInter.interpreter();

    endTime = clock();
    end_time = time(NULL);
    double clockTime = (double)(endTime - startTime) / CLOCKS_PER_SEC;
    double timeTime = difftime( end_time, star_time);

    std::vector<int> encryptResult = easyBcInter.getCiphertext();

    std::cout << "enc : \n";
    for (int i = 0; i < encryptResult.size(); ++i) {
        std::cout << encryptResult[i];
    }
    std::cout << std::endl;

    std::vector<double> encryptTime;
    encryptTime.push_back(clockTime);
    encryptTime.push_back(timeTime);
    return encryptTime;
}