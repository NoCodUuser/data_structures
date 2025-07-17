cmake_minimum_required(VERSION 3.5)

project(data_structures LANGUAGES CXX)

FILE(GLOB_RECURSE LibFiles "include/*.h")
add_custom_target(_data_structures_include SOURCES ${LibFiles})

file(GLOB_RECURSE Sources "source/*.cpp")

if(MSVC)
    add_compile_options(/bigobj)
endif(MSVC)

add_executable(data_structures ${Sources})

target_include_directories(data_structures PUBLIC
                            "${PROJECT_SOURCE_DIR}"
                            "${PROJECT_SOURCE_DIR}/include"
)
