cmake_minimum_required(VERSION 2.8.3)
project(cxxtk)

option(BULILD_SHARED_LIBS "" OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

file(GLOB_RECURSE HEADERS "src/*.h*" )
file(GLOB_RECURSE SOURCES "src/*.cpp" )

add_library(${PROJECT_NAME} ${HEADERS} ${SOURCES})
if(UNIX)
  target_link_libraries(${PROJECT_NAME} pthread)
endif()

option(BUILD_TESTS "" OFF)
if(BUILD_TESTS)
  add_subdirectory(tests)
endif()

