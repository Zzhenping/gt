cmake_minimum_required(VERSION 3.25)
project(git_tools)

set(CMAKE_CXX_STANDARD 17)

include_directories(${PROJECT_SOURCE_DIR}/include)

file(GLOB SOURCES "${PROJECT_SOURCE_DIR}/src/*.cpp")

add_executable(gt ${SOURCES} src/main.cpp include/help.h src/help.cpp include/utils.h src/utils.cpp include/gt.h src/gt.cpp include/arguments.h src/arguments.cpp)
