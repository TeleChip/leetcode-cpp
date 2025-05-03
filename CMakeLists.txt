cmake_minimum_required(VERSION 3.10)
project(leetcode_cpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Automatically add all problem subdirectories
file(GLOB children RELATIVE ${CMAKE_SOURCE_DIR}/problems ${CMAKE_SOURCE_DIR}/problems/*)
foreach(child ${children})
    if(IS_DIRECTORY ${CMAKE_SOURCE_DIR}/problems/${child})
        add_subdirectory(problems/${child})
    endif()
endforeach()