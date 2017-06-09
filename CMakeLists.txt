cmake_minimum_required(VERSION 3.6)
project(MyCcode)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        main.c)

add_executable(MyCcode ${SOURCE_FILES})