cmake_minimum_required(VERSION 3.15) # Revise this

project(MemUtils LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SRC_PATH "${CMAKE_CURRENT_SOURCE_DIR}/../Src")
set(INCLUDE_PATH "${SRC_PATH}/Includes" )

add_library(MemUtils 
    ${SRC_PATH}/System.cpp
    ${SRC_PATH}/SystemImpl.cpp
)

target_include_directories(MemUtils
    PUBLIC
        ${INCLUDE_PATH}
)

set_target_properties(MemUtils PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/../Bin"
)
