//
// Created by Administrator on 2025/9/3.
//
#include "easybc/handlers/SboxHandler.h"
#include "easybc/analysis/sbox/SboxModel.h"
#include "easybc/analysis/sbox/Reduction.h"
#include "easybc/util/utilities.h" // for utilities::split
#include <iostream>
#include <vector>

// 声明在其他地方定义的全局函数/类
void SboxModelingMGR(std::vector<std::string> params);

namespace easybc {
    namespace handlers {

/**
 * @brief 执行S盒建模任务的静态方法。
 * @details 此方法是SboxHandler的核心，它将从命令行接收到的、
 * 类型安全的参数，转换为原有SboxModelingMGR函数所需的
 * std::vector<std::string>格式，并调用它。
 * 这种封装使得我们可以逐步替换旧的实现，同时保持接口的现代化。
 * @param sboxName S盒的名称。
 * @param sboxValues 以逗号分隔的S盒值字符串。
 * @param mode 建模模式。
 * @param reductionMethod S盒规约方法。
 */
        void SboxHandler::execute(const std::string& sboxName,
                                  const std::string& sboxValues,
                                  const std::string& mode,
                                  int reductionMethod) {
            std::cout << "--- S-box Modeling Task ---" << std::endl;
            std::cout << "Name: " << sboxName << std::endl;
            std::cout << "Mode: " << mode << std::endl;
            std::cout << "Reduction Method: " << reductionMethod << std::endl;

            // 将参数打包成旧函数所需的格式
            std::vector<std::string> params = {
                    sboxName,
                    sboxValues,
                    mode,
                    std::to_string(reductionMethod)
            };

            // 调用原有的核心逻辑函数
            SboxModelingMGR(params);

            std::cout << "--- S-box Modeling Task Finished ---" << std::endl;
        }

    } // namespace handlers
} // namespace easybc


/**
 * @brief (原有函数) S盒建模任务管理器。
 * @details 这是从旧main.cpp迁移过来的函数。它负责解析参数，
 * 创建SboxM对象，并调用规约方法。
 * 目前，新的SboxHandler::execute会调用此函数，未来可以
 * 将此函数的逻辑直接整合进SboxHandler类中。
 * @param params 包含S盒建模所有参数的字符串向量。
 * - params[0]: S盒名称 (string)
 * - params[1]: S盒值，逗号分隔 (string)
 * - params[2]: 建模模式 (string, "AS" or "DC")
 * - params[3]: 规约方法 (string, "1" to "8")
 */
void SboxModelingMGR(std::vector<std::string> params) {
    std::string sboxName = params[0];
    std::vector<std::string> sboxStr = utilities::split(params[1], ",");
    std::vector<int> sbox;
    for (const auto &ele: sboxStr) { sbox.push_back(std::stoi(ele)); };
    std::string mode = params[2];
    int redMd = std::stoi(params[3]);
    SboxM sboxM(sboxName, sbox, mode);
    // 注意：原代码中，此函数的返回值未被使用。
    std::vector<std::vector<int>> redResults = Red::reduction(redMd, sboxM);
}