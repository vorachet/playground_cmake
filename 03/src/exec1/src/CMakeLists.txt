message("03 exec1")

cmake_minimum_required(VERSION 2.8.9)
project("03 exec1")
include_directories(../../shared/src/)
add_executable(exec1 main.cpp)
add_library(libmylib SHARED ../../shared/build/libmylib.dylib)
