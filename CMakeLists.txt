cmake_minimum_required(VERSION 3.0)
project(test)
set(CMAKE_CXX_STANDARD 17)

# 简单测试
# set(SRC main.cpp add.cpp sub.cpp mul.cpp div.cpp)
# set(MAIN /home/pan/learn/)

# 搜索文件
# aux_source_directory(${PROJECT_SOURCE_DIR} SRC_LIST)
# add_executable(app ${SRC_LIST})

file(GLOB SRC_LIST ${CMAKE_CURRENT_SOURCE_DIR}/src/*cpp)
# include_directories(${PROJECT_SOURCE_DIR}/include)


# 指定动静态库的生成路径
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/aa)
# 制作动静态库
add_library(calc STATIC ${SRC_LIST})
