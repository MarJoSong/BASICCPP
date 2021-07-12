# cmake_minimum_required(VERSION <specify CMake version here>)
project(Observer)

set(CMAKE_CXX_STANDARD 11)

add_executable(Observer main.cpp Observerable.cpp)