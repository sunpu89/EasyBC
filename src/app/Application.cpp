#include "easybc/app/Application.h"
#include "CLI/CLI.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

#include "easybc/handlers/AnalysisHandler.h"
#include "easybc/handlers/InterpreterHandler.h"
#include "easybc/handlers/SboxHandler.h"
#include "easybc/util/setup.h"

namespace easybc {

/**
 * @brief [最终修正] 使用CMake注入的绝对路径来准备密码分析任务的配置
 * @details 此函数现在构建一个绝对路径，从而完全消除了相对路径的模糊性。
 * @param cipherName 用户指定的密码名称。
 * @param outConfig 将被填充的配置结构体。
 * @throws std::runtime_error 如果密码名称无效或找不到文件。
 */
    void prepareAnalysisFile(const std::string& cipherName, handlers::AnalysisConfig& outConfig) {
        if (setup::cryptPrimitiveMap.find(cipherName) == setup::cryptPrimitiveMap.end()) {
            throw std::runtime_error("错误: 在密码原语映射中未找到 '" + cipherName + "'。");
        }
        std::string runCipherName = setup::cryptPrimitiveMap.at(cipherName);
        std::string primitiveSet = setup::cryptPrimitiveSetMap.at(cipherName);

        // 如果CMake没有定义PROJECT_SOURCE_DIR，提供一个默认值以防万一
#ifndef PROJECT_SOURCE_DIR
#define PROJECT_SOURCE_DIR "."
#endif

        // 使用CMake在编译时传入的绝对路径宏
        std::string projectRoot = PROJECT_SOURCE_DIR;
        outConfig.benchmarkPath = projectRoot + "/benchmarks/" + primitiveSet + "/" + runCipherName + ".cl";

        std::ifstream f(outConfig.benchmarkPath.c_str());
        if (!f.good()) {
            throw std::runtime_error("错误: 找不到基准测试文件。\n尝试的绝对路径: " + outConfig.benchmarkPath);
        }
    }

// ... prepareInterpreterConfig 和 Application::run 的其他部分保持不变 ...
// ... 为了简洁，此处省略，你无需修改它们 ...
    handlers::InterpreterConfig prepareInterpreterConfig(const std::string& cipherType, const std::string& cipherName) {
        // ... (保持不变) ...
        if (cipherType != "blockCipher" && cipherType != "NIST") {
            throw std::runtime_error("错误: 无效的原语类型 '" + cipherType + "'。请使用 'blockCipher' 或 'NIST'。");
        }
        if (setup::cryptPrimitiveInterMap.find(cipherName) == setup::cryptPrimitiveInterMap.end()){
            throw std::runtime_error("错误: 在解释器映射中未找到密码 '" + cipherName + "'。");
        }
        handlers::InterpreterConfig config;
        config.cipherType = cipherType;
        config.cipherName = cipherName;
        return config;
    }

    int Application::run(int argc, char** argv) {
        // ... (整个 run 函数保持不变，无需修改) ...
        CLI::App app{"EasyBC v2.0: 一款用于分组密码安全性分析的工具平台"};
        app.set_version_flag("-v,--version", "2.0.0");
        app.failure_message(CLI::FailureMessage::help);

        auto analyze_cmd = app.add_subcommand("analyze", "对指定的密码原语进行差分密码分析。");
        auto config = std::make_shared<handlers::AnalysisConfig>();
        analyze_cmd->alias("-s");

        auto req_group = analyze_cmd->add_option_group("必要参数", "Required arguments");
        req_group->add_option("cipher", config->benchmarkPath, "要分析的密码名称 (例如: PRESENT)。程序将自动查找对应文件。")
                ->required()
                ->transform([config](std::string cipherName) {
                    prepareAnalysisFile(cipherName, *config);
                    return config->benchmarkPath;
                });

        auto opt_group = analyze_cmd->add_option_group("可选配置", "Optional anaylsis parameters");
        opt_group->add_option("-m,--mode", config->mode, "建模模式: 'w'(字), 'b'(位), 'd'(扩展位)。")->default_val(config->mode);
        opt_group->add_option("-t,--target", config->target, "分析目标: 'cryptanalysis' 或 'evaluation'。")->default_val(config->target);
        opt_group->add_option("-r,--reduction", config->reductionMethod, "S盒规约方法 (1-8)。")->default_val(config->reductionMethod);
        opt_group->add_option("--start", config->startRound, "分析的起始轮数。")->default_val(config->startRound);
        opt_group->add_option("--end", config->endRound, "分析的结束轮数。")->default_val(config->endRound);
        opt_group->add_option("--timer", config->timer, "Gurobi求解器超时时间 (秒)。")->default_val(config->timer);
        opt_group->add_option("--threads", config->threadsNum, "Gurobi求解器使用的线程数。")->default_val(config->threadsNum);
        opt_group->add_option("--total-rounds", config->totalRoundNum, "当目标为'evaluation'时，必须指定总轮数。")->default_val(config->totalRoundNum);
        opt_group->add_option("--eval-size", config->evaluationSize, "当目标为'evaluation'时，指定评估大小。")->default_val(config->evaluationSize);

        auto interpret_cmd = app.add_subcommand("interpret", "运行EasyBC解释器以加密一个密码原语。");
        auto interp_config = std::make_shared<handlers::InterpreterConfig>();
        interpret_cmd->alias("-i");
        interpret_cmd->add_option("cipher", interp_config->cipherName, "要执行的密码名称。")->required();
        interpret_cmd->add_option("-t,--type", interp_config->cipherType, "原语类型: 'blockCipher' 或 'NIST'。")->required();

        auto benchmark_cmd = app.add_subcommand("benchmark", "列出所有或特定类型的支持原语。");
        benchmark_cmd->alias("-nist")->alias("-block")->alias("-bench");

        auto sbox_cmd = app.add_subcommand("sbox", "对S盒进行差分传播建模。");
        // ... sbox 选项 ...

        try {
            if (argc == 1) { std::cout << app.help() << std::endl; return 0; }
            app.parse(argc, argv);
        } catch (const CLI::ParseError &e) {
            return app.exit(e);
        }

        try {
            if (analyze_cmd->parsed()) {
                handlers::AnalysisHandler::execute(*config);
            } else if (interpret_cmd->parsed()) {
                handlers::InterpreterConfig checked_interp_config = prepareInterpreterConfig(interp_config->cipherType, interp_config->cipherName);
                handlers::InterpreterHandler::execute(checked_interp_config);
            } else if (benchmark_cmd->parsed()) {
                std::string called_name = benchmark_cmd->get_name();
                if(called_name == "benchmark" || called_name == "-bench") { /* ... */ }
                else if (called_name == "-block") { /* ... */ }
                else if (called_name == "-nist") { /* ... */ }
            } else if (sbox_cmd->parsed()) {
                // ...
            }
        } catch (const std::exception& e) {
            std::cerr << "操作失败: " << e.what() << std::endl;
            return 1;
        }
        return 0;
    }
} // namespace easybc