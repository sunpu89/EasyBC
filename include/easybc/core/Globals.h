//
// Created by Administrator on 2025/9/3.
//

#ifndef EASYBC_GLOBALS_H
#define EASYBC_GLOBALS_H

#include <string>
#include <vector>
#include <map>
#include <memory>

// 包含Flex/Bison所需的AST根节点声明
#include "easybc/core/ASTNode.h"

/**
 * @file Globals.h
 * @brief 声明项目所需的所有全局变量。
 * @details 任何需要访问这些全局状态的源文件都应包含此头文件。
 * `extern`关键字告诉编译器，这些变量的定义在其他地方。
 */

// --- 核心全局变量 ---
extern std::map<std::string, std::vector<int>> allBox;
extern std::map<std::string, std::vector<int>> pboxM;
extern std::map<std::string, int> pboxMSize;
extern std::map<std::string, std::vector<int>> Ffm;
extern std::string cipherName;
extern int ASTNodeCounter;

// --- Flex/Bison 全局变量 ---
// 这些变量由Flex/Bison生成的代码定义和使用
extern int yyparse();
extern int yydebug;
extern FILE *yyin;
extern int yylineno;
extern std::shared_ptr<ASTNode::NBlock> programRoot;

#endif //EASYBC_GLOBALS_H