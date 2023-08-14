cmake_minimum_required(VERSION 3.26)

# CMakeLists.txt in exercise2/q1

file(GLOB Q1_SOURCE_FILES q1/*.c)
file(GLOB Q2_SOURCE_FILES q2/*.c)
file(GLOB Q3_SOURCE_FILES q3/*.c)
file(GLOB Q4_SOURCE_FILES q4/*.c)
file(GLOB Q5_SOURCE_FILES q5/*.c)
file(GLOB Q6_SOURCE_FILES q6/*.c)
file(GLOB Q7_SOURCE_FILES q7/*.c)
file(GLOB Q8_SOURCE_FILES q8/*.c)

# Add source files
add_executable(Q1 ${Q1_SOURCE_FILES})
add_executable(Q2 ${Q2_SOURCE_FILES})
add_executable(Q3 ${Q3_SOURCE_FILES})
add_executable(Q4 ${Q4_SOURCE_FILES})
add_executable(Q5 ${Q5_SOURCE_FILES})
add_executable(Q6 ${Q6_SOURCE_FILES})
add_executable(Q7 ${Q7_SOURCE_FILES})
add_executable(Q8 ${Q8_SOURCE_FILES})