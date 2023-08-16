cmake_minimum_required(VERSION 3.26)

# CMakeLists.txt in exercise2

file(GLOB Q1_SOURCE_FILES q1/*.c)
file(GLOB Q2_SOURCE_FILES q2/*.c)
file(GLOB Q3_SOURCE_FILES q3/*.c)
file(GLOB Q4_SOURCE_FILES q4/*.c)
file(GLOB Q5_SOURCE_FILES q5/*.c)
file(GLOB Q6_SOURCE_FILES q6/*.c)
file(GLOB Q7_SOURCE_FILES q7/*.c)
file(GLOB Q8_SOURCE_FILES q8/*.c)
file(GLOB Q9_SOURCE_FILES q9/*.c)
file(GLOB Q10_SOURCE_FILES q10/*.c)
file(GLOB Q11_SOURCE_FILES q11/*.c)

# Add source files
add_executable(Q21 ${Q1_SOURCE_FILES})
add_executable(Q22 ${Q2_SOURCE_FILES})
add_executable(Q23 ${Q3_SOURCE_FILES})
add_executable(Q24 ${Q4_SOURCE_FILES})
add_executable(Q25 ${Q5_SOURCE_FILES})
add_executable(Q26 ${Q6_SOURCE_FILES})
add_executable(Q27 ${Q7_SOURCE_FILES})
add_executable(Q28 ${Q8_SOURCE_FILES})
add_executable(Q29 ${Q9_SOURCE_FILES})
add_executable(Q210 ${Q10_SOURCE_FILES})
add_executable(Q211 ${Q11_SOURCE_FILES})