#ifndef EASYBC_INTERPRETERHANDLER_H
#define EASYBC_INTERPRETERHANDLER_H

#include <string>

namespace easybc {
    namespace handlers {

/**
 * @struct InterpreterConfig
 * @brief 封装解释器任务所有配置参数的结构体。
 */
        struct InterpreterConfig {
            std::string cipherType;
            std::string cipherName;
        };

/**
 * @class InterpreterHandler
 * @brief 负责处理所有与EasyBC解释器执行相关任务的模块。
 */
        class InterpreterHandler {
        public:
            /**
             * @brief 执行解释器任务的入口点。
             * @param config 包含所有解释器任务配置的结构体。
             */
            static void execute(const InterpreterConfig& config);
        };

    } // namespace handlers
} // namespace easybc

#endif //EASYBC_INTERPRETERHANDLER_H