cmake_minimum_required(VERSION 3.25)
project(play)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(
        rpc_lib
        STATIC
        src/rpc_lib/rpc_lib.cpp
        src/rpc_lib/rpc_lib.h
)

add_executable(
        main
        src/main.cpp
)

target_link_libraries(
        main
        rpc_lib
)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
        main_test
        tests/main_test.cpp
)
target_link_libraries(
        main_test
        rpc_lib
        GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(main_test)
