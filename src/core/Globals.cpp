//
// Created by Administrator on 2025/9/3.
//
#include "easybc/core/Globals.h"

/**
 * @file Globals.cpp
 * @brief 定义并初始化项目所需的所有全局变量。
 * @details 这是整个项目中唯一一处为这些全局变量分配内存的地方，
 * 解决了“undefined reference”链接错误。
 */

// --- 核心全局变量定义 ---
std::map<std::string, std::vector<int>> allBox = {};
std::map<std::string, std::vector<int>> pboxM = {};
std::map<std::string, int> pboxMSize = {};
std::map<std::string, std::vector<int>> Ffm = {};
std::string cipherName;
int ASTNodeCounter = 0;
