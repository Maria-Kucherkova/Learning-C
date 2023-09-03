# CMakeLists.txt in the root directory

cmake_minimum_required(VERSION 3.26)

set(CMAKE_C_STANDARD 17)

project(Exercises)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Add the Exercise1/Q1 subdirectory
add_subdirectory("exercise2")
add_subdirectory("exercise3")
add_subdirectory("exercise4")

# You can add more subdirectories here if needed
