cmake_minimum_required(VERSION 2.8)
project( $ENV{env_filename} )

SET(CMAKE_CXX_FLAGS "-std=c++17")

add_executable( ${PROJECT_NAME}.out ${PROJECT_NAME}.cpp)
