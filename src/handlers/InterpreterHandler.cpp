//
// Created by Administrator on 2025/9/3.
//
#include "easybc/handlers/InterpreterHandler.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <cassert>
#include "easybc/interpreter/semanticInter.h" // for EasyBCInter

// 声明在其他地方定义的全局函数/类
void EasyBCInterpreter(std::vector<std::string> params);
std::vector<double> EasyBCInterpreterDebug(std::vector<std::string> params);

// 声明在其他地方定义的全局变量
extern FILE *yyin;

namespace easybc {
    namespace handlers {

/**
 * @brief 执行解释器任务的静态方法。
 * @param cipherType 密码原语的类型。
 * @param cipherName 要执行的密码原语的名称。
 */
        void InterpreterHandler::execute(const InterpreterConfig& config) {
            std::cout << "--- EasyBC Interpreter Task ---" << std::endl;
            std::cout << "Cipher Type: " << config.cipherType << std::endl;
            std::cout << "Cipher Name: " << config.cipherName << std::endl;

            EasyBCInterpreter({config.cipherType, config.cipherName});

            std::cout << "--- EasyBC Interpreter Task Finished ---" << std::endl;
        }

    } // namespace handlers
} // namespace easybc


/**
 * @brief (原有函数) EasyBC解释器管理器。
 * @details 从旧main.cpp迁移而来。它负责批量处理测试用例，
 * 调用解释器核心(EasyBCInterpreterDebug)，并记录加密时间。
 * @param params 包含解释器任务所有参数的字符串向量。
 * - params[0]: 密码原语类型 (string, "blockCipher" or "NIST")
 * - params[1]: 密码原语名称 (string)
 */
void EasyBCInterpreter(std::vector<std::string> params) {
    int testNum = 100; // 原代码中的硬编码测试数量
    std::string type = params[0]; // blockCipher or NIST
    std::string cipherName = params[1];
    std::string path = "../data/interpreterInput/" + type + "/" + cipherName + "/";
    std::vector<std::vector<double>> allEncryptionTime;
    for (int i = 0; i < testNum; ++i) {
        std::cout << " ======================= TEST CASE " << i << " ======================= " << std::endl;
        std::string inputFilePath = path + std::to_string(i) + ".txt";
        std::ifstream file;
        file.open(inputFilePath);
        if (!file){
            std::cout << "Wrong input file path : " << inputFilePath << std::endl;
        } else {
            std::string model, line;
            std::string whiteSpaces = " \n\r\t\f\v";
            std::vector<std::string> caseParams;
            while (getline(file, line)) {
                size_t first_non_space = line.find_first_not_of(whiteSpaces);
                line.erase(0, first_non_space);
                size_t last_non_space = line.find_last_not_of(whiteSpaces);
                line.erase(last_non_space + 1);
                caseParams.push_back(line);
            }
            file.close();
            std::vector<double> encryptionTime = EasyBCInterpreterDebug(caseParams);
            allEncryptionTime.push_back(encryptionTime);
            std::cout << " =============== TEST CASE " << i << " ENCRYPTION FINISH =============== \n" << std::endl;
        }
    }

    std::string encTimePath = path + "encryptionTime/";
    // 注意：system调用在工业级代码中通常不被推荐，因为它存在安全风险且不可移植。
    // 未来可以考虑使用C++17的<filesystem>库来替代。
    system(("mkdir -p " + encTimePath).c_str());
    encTimePath += "encTime.txt";
    system(("touch " + encTimePath).c_str());

    std::ofstream f(encTimePath, std::ios::trunc);
    double AverageClockTime = 0, AverageTimeTime = 0;
    for (size_t i = 0; i < allEncryptionTime.size(); ++i) {
        f << " ============== test case " << i << "  ============== \n";
        f << "clock time : " << allEncryptionTime[i][0] << "s\n";
        f << "time time : " << allEncryptionTime[i][1] << "s\n\n";
        AverageClockTime += allEncryptionTime[i][0];
        AverageTimeTime += allEncryptionTime[i][1];
    }
    f << "average clock time : " << AverageClockTime/testNum << "s\n";
    f << "average time time : " << AverageTimeTime/testNum << "s\n";
    f.close();
    std::cout << "Print all encryption time to : " << encTimePath << std::endl;
}

// 备注：EasyBCInterpreterDebug 函数由于依赖于解释器的内部状态和AST解析，
// 它应该与 MILPMGR 函数一样，被放置在同一个文件中，以便访问共享的
// 全局变量和声明。我们将它和AnalysisHandler放在一起。