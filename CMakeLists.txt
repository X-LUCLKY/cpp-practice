# cpp-practice：自动扫描 practices/<练习名>/main.cpp，无需手工添加目标
cmake_minimum_required(VERSION 3.20)
project(cpp_practice CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

file(GLOB PRACTICE_MAINS CONFIGURE_DEPENDS
     "${CMAKE_CURRENT_SOURCE_DIR}/practices/*/main.cpp")

foreach(src IN LISTS PRACTICE_MAINS)
  get_filename_component(dir "${src}" DIRECTORY)
  get_filename_component(folder "${dir}" NAME)
  add_executable(${folder} "${src}")
  message(STATUS "practice target: ${folder}  <-  ${src}")
endforeach()