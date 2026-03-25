cmake_minimum_required(VERSION 3.20)
project(cpp_medtech_intro LANGUAGES CXX)

enable_testing()

add_library(hello_lib
    src/hello.cpp
)

target_include_directories(hello_lib PUBLIC include)

add_executable(app
    src/main.cpp
)

target_link_libraries(app PRIVATE hello_lib)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.16.0.zip
)
FetchContent_MakeAvailable(googletest)

add_executable(unit_tests
    tests/test_hello.cpp
)

target_link_libraries(unit_tests
    PRIVATE
    hello_lib
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(unit_tests)
