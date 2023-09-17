cmake_minimum_required(VERSION 3.26)

# CMakeLists.txt in exercise4

file(GLOB Q1_SOURCE_FILES q1/*.c)
file(GLOB Q2_SOURCE_FILES q2/*.c)
file(GLOB Q3_SOURCE_FILES q3/*.c)
file(GLOB Q4_SOURCE_FILES q4/*.c)
file(GLOB Q5_SOURCE_FILES q5/*.c)




# Add source files
add_executable(Q41 ${Q1_SOURCE_FILES})
add_executable(Q42 ${Q2_SOURCE_FILES})
add_executable(Q43 ${Q3_SOURCE_FILES})
add_executable(Q44 ${Q4_SOURCE_FILES})
add_executable(Q45 ${Q5_SOURCE_FILES})

