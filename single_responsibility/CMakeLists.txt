cmake_minimum_required(VERSION 3.25)

project(single_responsibility
    VERSION 0.0.1
    LANGUAGES CXX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
    
add_subdirectory(correct_pattern)
add_subdirectory(wrong_pattern)