cmake_minimum_required(VERSION 3.6)
project(Reimp)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp CLIArgumentParser.cpp CLIArgumentParser.h)
add_executable(Reimp ${SOURCE_FILES})
