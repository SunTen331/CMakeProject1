cmake_minimum_required(VERSION 3.20)
project(AppForName
        VERSION 0.0.1
        DESCRIPTION "First try with cmake"
        LANGUAGES CXX)

# Target
add_executable(AppForNameBinary 
        main.cpp
        src/fullName.cpp
        src/people.cpp
        )
target_compile_features(AppForNameBinary PRIVATE cxx_std_17)
target_include_directories(AppForNameBinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)