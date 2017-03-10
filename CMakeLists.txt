cmake_minimum_required(VERSION 2.8.3)
project(utils)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall")

include_directories(${CMAKE_CURRENT_SOURCE_DIR} )

file(GLOB_RECURSE HEADERS "*.h*" )
file(GLOB_RECURSE SOURCES "*.cpp" )

add_library(util ${HEADERS} ${SOURCES})

add_executable(testmath test/test_math.cpp)
add_executable(testrate test/test_rate.cpp)
target_link_libraries(testrate util)
add_executable(testhist test/test_histogram.cpp)
target_link_libraries(testhist util)

