//
// Created by Administrator on 2025/9/3.
//

#ifndef EASYBC_SBOXHANDLER_H
#define EASYBC_SBOXHANDLER_H

#include <string>
#include <vector>

namespace easybc {
namespace handlers {

/**
 * @class SboxHandler
 * @brief 负责处理所有与S盒建模相关任务的模块。
 * @details 该类封装了从参数解析到调用S盒建模核心逻辑的所有步骤，
 * 实现了S盒建模功能的单一职责。
 */
class SboxHandler {
public:
    /**
     * @brief 执行S盒建模任务的入口点。
     * @param sboxName S盒的名称。
     * @param sboxValues 以逗号分隔的S盒值字符串 (例如, "4,15,3,...").
     * @param mode 建模模式 ("AS" 或 "DC").
     * @param reductionMethod S盒规约方法 (1-8)。
     */
    static void execute(const std::string& sboxName,
                        const std::string& sboxValues,
                        const std::string& mode,
                        int reductionMethod);
};

} // namespace handlers
} // namespace easybc

#endif //EASYBC_SBOXHANDLER_H
