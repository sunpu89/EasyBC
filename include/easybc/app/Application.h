//
// Created by Administrator on 2025/9/3.
//

#ifndef EASYBC_APPLICATION_H
#define EASYBC_APPLICATION_H

namespace easybc {

/**
 * @class Application
 * @brief 应用程序的核心类，负责命令行解析和任务分发。
 */
    class Application {
    public:
        /**
         * @brief 运行应用程序的入口点。
         * @param argc 命令行参数数量。
         * @param argv 命令行参数值。
         * @return 程序退出码 (0 表示成功).
         */
        int run(int argc, char** argv);
    };

} // namespace easybc

#endif //EASYBC_APPLICATION_H