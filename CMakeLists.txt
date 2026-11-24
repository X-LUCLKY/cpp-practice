# cpp-practice：一个仓库，多个练习目标
cmake_minimum_required(VERSION 3.20)
project(cpp_practice CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# ---- 每个练习一个可执行文件（一个 target 只能包一个带 main 的文件）----
add_executable(w1_function practices/w1_function/main1.cpp)

# 备用/实验文件，需要时取消下面这行注释，并确保该文件里有 main()
# add_executable(w1_function_2 practices/w1_function/main2.cpp)

# 以后新增练习的写法：
# add_executable(w2_loop practices/w2_loop/main.cpp)