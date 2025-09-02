# =============================================================================
# EasyBC v5.1.0 - "The Linker Fix" Build Script
# =============================================================================
# @brief      This version correctly finds and links the OpenMP library
#             to resolve the "undefined reference to `omp_...`" errors.
# @version    5.1.0
#
cmake_minimum_required(VERSION 3.16)
project(EasyBC VERSION 5.1.0 LANGUAGES CXX)

# --- 基本设置 ---
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

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
# [最终修正]: 使用CMake官方方式查找OpenMP
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
# 自动搜集所有源文件
# =============================================================================
file(GLOB_RECURSE EASYBC_SOURCES "src/*.cpp")

# =============================================================================
# 定义可执行文件
# =============================================================================
add_executable(EasyBC ${EASYBC_SOURCES} ${PARSER_SOURCE} ${LEXER_SOURCE})

# =============================================================================
# 链接库
# =============================================================================
target_link_libraries(EasyBC PRIVATE
        ${FLEX_LIBRARIES}
        ${BISON_LIBRARIES}
        jsoncpp
        gurobi_g++8.5
        gurobi120
        z3
        Threads::Threads
        # [最终修正]: 链接到CMake找到的OpenMP C++目标
        # 这会自动添加所有必需的编译器和链接器标志 (-fopenmp)
        OpenMP::OpenMP_CXX
)

target_link_directories(EasyBC PRIVATE
        "/usr/local/lib"
        "/home/sunpu/gurobi/gurobi1203/linux64/lib"
)

# [最终修正]: 从这里移除手动的 -fopenmp, 因为 OpenMP::OpenMP_CXX 会自动处理
target_compile_options(EasyBC PRIVATE
        -O3 -g2 -gdwarf-2
)

message(STATUS "Build system finalized. OpenMP linked. Ready for final executable.")