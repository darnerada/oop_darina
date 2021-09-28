cmake_minimum_required(VERSION 3.17)
project(oop_darina)

set(CMAKE_CXX_STANDARD 14)

add_executable(oop_darina src/main.cpp src/purchase.cpp include/purchase.h)
target_include_directories(oop_darina PUBLIC include)
