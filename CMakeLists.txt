cmake_minimum_required(VERSION 3.29)
project(untitled)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic")
set(CMAKE_CXX_STANDARD 20)

add_executable(untitled main.cpp
        myStack.cpp
        myStack.hpp
        catch.hpp
        unit_tests.cpp

)
