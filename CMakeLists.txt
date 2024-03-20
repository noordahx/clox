# cmake_minimum_required(VERSION <specify CMake version here>)
project(clox C)

set(CMAKE_C_STANDARD 11)

add_executable(clox
        main.c
        common.h
        chunk.c
        chunk.h
        memory.h
        memory.c
        debug.c
        debug.h
        value.c
        value.h
)
