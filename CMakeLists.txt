# =============================================================================
# EasyBC v10.0 - "The Absolute Path" Build Script
# =============================================================================
# @brief      This final version injects the absolute project source directory
#             into the executable to create robust, absolute paths to resources.
# @version    10.0.0
#
cmake_minimum_required(VERSION 3.16)
project(EasyBC VERSION 10.0.0 LANGUAGES CXX)

# --- 基本设置 ---
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# =============================================================================
# 依赖管理：CLI11
# =============================================================================
include(FetchContent)
FetchContent_Declare(
        CLI11
        GIT_REPOSITORY https://github.com/CLIUtils/CLI11.git
        GIT_TAG v2.3.2
)
FetchContent_MakeAvailable(CLI11)

# =============================================================================
# 包含目录
# =============================================================================
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
include_directories(${CMAKE_BINARY_DIR})
include_directories("/usr/local/include")
include_directories("/home/sunpu/gurobi/gurobi1203/linux64/include")

# =============================================================================
# 依赖包查找
# =============================================================================
find_package(FLEX REQUIRED)
find_package(BISON REQUIRED)
find_package(Threads REQUIRED)
find_package(OpenMP REQUIRED)

# =============================================================================
# Flex/Bison 代码生成
# =============================================================================
set(GENERATED_DIR ${CMAKE_BINARY_DIR}/generated)
file(MAKE_DIRECTORY ${GENERATED_DIR})
set(PARSER_HEADER ${GENERATED_DIR}/parser.h)
set(PARSER_SOURCE ${GENERATED_DIR}/parser.cpp)
set(LEXER_SOURCE ${GENERATED_DIR}/lexer.cpp)

BISON_TARGET(EasyBCParser src/frontend/language/parser.y ${PARSER_SOURCE} DEFINES_FILE ${PARSER_HEADER})
FLEX_TARGET(EasyBCLexer src/frontend/language/lexer.l ${LEXER_SOURCE})
ADD_FLEX_BISON_DEPENDENCY(EasyBCLexer EasyBCParser)

# =============================================================================
# 源文件列表
# =============================================================================
set(EASYBC_SOURCES
        src/main.cpp
        src/app/Application.cpp
        src/handlers/AnalysisHandler.cpp
        src/handlers/InterpreterHandler.cpp
        src/handlers/SboxHandler.cpp
        src/core/ASTNode.cpp
        src/core/ProcedureH.cpp
        src/core/ValueCommon.cpp
        src/core/Globals.cpp
        src/frontend/Transformer.cpp
        src/util/BranchNum.cpp
        src/util/utilities.cpp
        src/analysis/sbox/Check.cpp
        src/analysis/sbox/Reduction.cpp
        src/analysis/sbox/SboxModel.cpp
        src/analysis/sbox/superball.cpp
        src/analysis/sbox/superballMGR.cpp
        src/analysis/differential/DiffMILPcons.cpp
        src/analysis/differential/DiffSBMILP.cpp
        src/analysis/differential/DiffSWMILP.cpp
        src/interpreter/semanticInter.cpp
)

# =============================================================================
# 定义可执行文件
# =============================================================================
add_executable(EasyBC ${EASYBC_SOURCES} ${PARSER_SOURCE} ${LEXER_SOURCE})

# =============================================================================
# 链接库
# =============================================================================
target_link_libraries(EasyBC PRIVATE
        CLI11::CLI11
        ${FLEX_LIBRARIES}
        ${BISON_LIBRARIES}
        jsoncpp
        gurobi_g++8.5
        gurobi120
        z3
        Threads::Threads
        OpenMP::OpenMP_CXX
)

target_link_directories(EasyBC PRIVATE
        "/usr/local/lib"
        "/home/sunpu/gurobi/gurobi1203/linux64/lib"
)

# =============================================================================
# 编译选项与定义
# =============================================================================
target_compile_options(EasyBC PRIVATE -O3 -g2 -gdwarf-2) # 暂时移除 -Werror 以便运行

# [最终修正]: 将项目根目录的绝对路径作为宏定义传递给C++代码
# CMAKE_SOURCE_DIR 是CMake内置变量，指向项目最顶层的CMakeLists.txt所在目录
target_compile_definitions(EasyBC PRIVATE PROJECT_SOURCE_DIR="${CMAKE_SOURCE_DIR}")

message(STATUS "Project build finalized. Absolute path to source injected.")