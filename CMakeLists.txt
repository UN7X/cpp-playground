cmake_minimum_required(VERSION 3.20)
project(cpp_starter LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Use ccache if available
find_program(CCACHE_PROGRAM ccache)
if (CCACHE_PROGRAM)
  set(CMAKE_CXX_COMPILER_LAUNCHER ${CCACHE_PROGRAM})
endif()

# Dependencies (use apt prebuilt packages from devcontainer)
find_package(SDL2 REQUIRED)
find_package(fmt REQUIRED)
find_package(Catch2 3 REQUIRED)

# App
add_executable(app src/main.cpp)
target_link_libraries(app PRIVATE SDL2::SDL2 fmt::fmt)

# Tests
add_executable(tests tests/test_main.cpp)
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)
include(CTest)
include(Catch)
catch_discover_tests(tests)
