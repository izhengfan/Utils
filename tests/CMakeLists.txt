enable_testing()
find_package(GTest REQUIRED)

include_directories(${CMAKE_SOURCE_DIR}/src )

include_directories(${GTEST_INCLUDE_DIRS})

file(GLOB TESTS test_*.c*)
message("To build tests ... ")
add_executable(ALL_TEST ${TESTS})
target_link_libraries(ALL_TEST
  ${PROJECT_NAME}
  ${GTEST_BOTH_LIBRARIES}
  )
