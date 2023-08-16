cmake_minimum_required(VERSION 3.26)

# CMakeLists.txt in exercise3

file(GLOB Q1_SOURCE_FILES q1/*.c)
file(GLOB Q2_SOURCE_FILES q2/*.c)

# Add source files
add_executable(Q31 ${Q1_SOURCE_FILES})
add_executable(Q32 ${Q2_SOURCE_FILES})