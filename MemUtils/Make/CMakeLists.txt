cmake_minimum_required(VERSION 3.15) # Revise this

project(MemUtils LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED_ON)

set(SRC_PATH "${CMAKE_CURRENT_SOURCE_DIR}/../Src")

add_executable(MemUtils 
    ${SRC_PATH}/main.cpp
)

set_target_properties(MemUtils PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/../Bin"
)
