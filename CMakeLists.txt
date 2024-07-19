cmake_minimum_required(VERSION 3.25)
project(git_tools)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE release CACHE STRING "Build Type" FORCE)
endif()

message(STATUS "Build type:${CMAKE_BUILD_TYPE}")

message(STATUS "Debug configuration:${CMAKE_CXX_FLAGS_DEBUG}")

message(STATUS "release configuration:${CMAKE_CXX_FLAGS_RELEASE}")

message(STATUS "release configuration with debug info:${CMAKE_CXX_FLAGS_RELWITHDEBINFO}")

message(STATUS "minimal release configuration:${CMAKE_CXX_FLAGS_MINSIZEREL}")

set(CMAKE_CXX_STANDARD 17)

include_directories(${PROJECT_SOURCE_DIR}/include)

file(GLOB SOURCES "${PROJECT_SOURCE_DIR}/src/*.cpp")

add_executable(gt ${SOURCES} src/main.cpp include/help.h src/help.cpp include/utils.h src/utils.cpp include/gt.h src/gt.cpp include/arguments.h src/arguments.cpp)
