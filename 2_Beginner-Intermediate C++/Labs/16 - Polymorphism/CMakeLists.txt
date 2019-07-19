# Specify the minimum version for CMake

cmake_minimum_required(VERSION 3.0)

# Project's name

project(farm)
# Set the output folder where your program will be created
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(CMAKE_BUILD_TYPE Debug)
# The following folder will be included
include_directories("${PROJECT_SOURCE_DIR}")


add_executable(farm ${PROJECT_SOURCE_DIR}/src/main.cpp
 ${PROJECT_SOURCE_DIR}/src/main.hpp
 ${PROJECT_SOURCE_DIR}/src/farm.cpp
 ${PROJECT_SOURCE_DIR}/src/farm.hpp)
