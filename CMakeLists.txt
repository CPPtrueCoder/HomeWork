cmake_minimum_required(VERSION 3.16)
project(lesson2)

set(CMAKE_CXX_STANDARD 17)

add_executable(lesson2 main.cpp Calculator/Calculator.cpp Calculator/Calculator.h Service/Service.cpp Service/Service.h)