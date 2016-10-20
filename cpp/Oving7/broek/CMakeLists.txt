cmake_minimum_required(VERSION 2.8)

project(broek)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra -Wno-unused-parameter")

add_executable(broek broek_t.cpp broek.cpp)
