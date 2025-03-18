cmake_minimum_required(VERSION 3.31.6)
project(cmake)
set(CMAKE_C_STANDARD 99)

include_directories(${CMAKE_SOURCE_DIR}/include)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g")
file(GLOB SOURCES ${CMAKE_SOURCE_DIR}/src/*.c)

add_executable(main ${SOURCES})
set_target_properties(main PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
