cmake_minimum_required(VERSION 3.10)

project(SMTP VERSION 0.0 LANGUAGES C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

file(GLOB ALL_SOURCES
    src/*.c
)

add_executable(smtp ${ALL_SOURCES})

target_include_directories(smtp PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

target_compile_options(smtp PRIVATE -Wall -Wextra -Wpedantic)