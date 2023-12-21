cmake_minimum_required(VERSION 3.16)

set(
        project_name
        Wolf4SDL
)

file(
        GLOB_RECURSE
        source_files
        src/*
        win/*
)

project(${project_name})

set(CMAKE_CXX_STANDARD 14)

set(SDL2_INCLUDE_DIRS "${CMAKE_CURRENT_LIST_DIR}/libraries/mingw/include/SDL2")

include_directories(${SDL2_INCLUDE_DIRS})

add_executable(${project_name} ${source_files})

target_link_libraries(
        ${project_name}
        -lSDL2main
        -lSDL2
        -lSDL2_mixer
        -static-libgcc
        -static-libstdc++
)