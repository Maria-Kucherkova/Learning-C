cmake_minimum_required(VERSION 3.26)

# CMakeLists.txt in exercise3

file(GLOB Q1_SOURCE_FILES q1/*.c)
file(GLOB Q2_SOURCE_FILES q2/*.c)
file(GLOB Q3_SOURCE_FILES q3/*.c)
file(GLOB Q4_SOURCE_FILES q4/*.c)
file(GLOB Q5_SOURCE_FILES q5/*.c)
file(GLOB Q6_SOURCE_FILES q6/*.c)

# Add source files
add_executable(Q31 ${Q1_SOURCE_FILES})
add_executable(Q32 ${Q2_SOURCE_FILES})
add_executable(Q33 ${Q3_SOURCE_FILES})
add_executable(Q34 ${Q4_SOURCE_FILES})
add_executable(Q35 ${Q5_SOURCE_FILES})
add_executable(Q36 ${Q6_SOURCE_FILES})