# cpp-practice：一个仓库，多个练习目标
cmake_minimum_required(VERSION 3.20)
project(cpp_practice CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# 编译产物统一放到 build/（已在 .gitignore 中忽略）
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# ---- 每个练习一个可执行文件 ----
add_executable(hello src/hello.cpp)
add_executable(w01_sum practices/w01_basics/main.cpp)

# 以后每加一个练习，在这里加一行：
# add_executable(w02_xxx practices/w02_xxx/main.cpp)
