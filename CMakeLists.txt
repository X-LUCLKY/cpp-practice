# cpp-practice：一个仓库，多个练习目标
cmake_minimum_required(VERSION 3.20)
project(cpp_practice CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 编译产物统一放到 build/bin
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# ---- 每个练习一个可执行文件 ----
add_executable(w1_function practices/w1_function/main.cpp)

# 以后每加一个练习，加一行，例如：
# add_executable(w2_loop practices/w2_loop/main.cpp)