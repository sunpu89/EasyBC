//
// Created by Administrator on 2025/9/3.
//

#ifndef EASYBC_ANALYSISHANDLER_H
#define EASYBC_ANALYSISHANDLER_H

#include <string>
#include <vector>

namespace easybc {
    namespace handlers {

/**
 * @struct AnalysisConfig
 * @brief [更新] 封装密码分析任务所有配置参数的结构体。
 * @details 包含了所有可由命令行配置的选项。
 */
        struct AnalysisConfig {
            std::string benchmarkPath;
            std::string mode = "b";
            std::string target = "cryptanalysis";
            int reductionMethod = 1;
            int startRound = 1;
            int endRound = 10;
            int timer = 3600 * 24; // 默认24小时
            int threadsNum = 16;   // 默认16线程
            int totalRoundNum = 0;
            int evaluationSize = 0;
        };

/**
 * @class AnalysisHandler
 * @brief 负责处理所有与密码分析（MILP建模）相关任务的模块。
 */
        class AnalysisHandler {
        public:
            /**
             * @brief 执行密码分析任务的入口点。
             * @param config 包含所有分析任务配置的结构体。
             */
            static void execute(const AnalysisConfig& config);
        };

    } // namespace handlers
} // namespace easybc

#endif //EASYBC_ANALYSISHANDLER_H