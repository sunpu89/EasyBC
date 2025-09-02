#include "easybc/app/Application.h"
#include <iostream>

/**
 * @brief 主函数 (程序入口)
 * @details 最终的、职责单一的main函数。
 * 它唯一的职责是创建并运行核心应用实例(easybc::Application)，
 * 并捕获任何未被处理的顶层异常，向用户提供友好的错误提示。
 * @param argc 命令行参数数量
 * @param argv 命令行参数值
 * @return 程序退出码 (0表示成功)
 */
int main(int argc, char* argv[]) {
    // 实例化核心应用类
    easybc::Application app;
    try {
        // 运行应用并返回其退出码
        return app.run(argc, argv);
    } catch (const std::exception& e) {
        // 捕获所有未预料的标准异常
        std::cerr << "An unexpected critical error occurred: " << e.what() << std::endl;
        return 1; // 返回一个通用的错误码
    } catch (...) {
        // 捕获所有其他类型的未知异常
        std::cerr << "An unknown critical error occurred." << std::endl;
        return 1;
    }
}