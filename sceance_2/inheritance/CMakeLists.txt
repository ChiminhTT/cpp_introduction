cmake_minimum_required(VERSION 2.8.9)
project (inheritance)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

include_directories(
  include/
)

set( SOURCES
  src/main.cpp
  src/MITPerson.cpp
  src/MITStudent.cpp
  src/Course.cpp
)

add_executable(inheritance ${SOURCES})
