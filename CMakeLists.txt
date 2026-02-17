cmake_minimum_required(VERSION 4.1)
project(ViewCode)

set(CMAKE_CXX_STANDARD 26)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(ViewCode src/main.cpp
        src/compile/compile.cpp
        src/types/types.cpp
        src/types/types.h
        src/blocks/blocks.cpp
        src/blocks/blocks.h
        src/compile/compile.h)
