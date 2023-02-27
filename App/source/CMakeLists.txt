cmake_minimum_required(VERSION 3.20)
project(AppForName
        VERSION 0.0.1
        DESCRIPTION "First try with cmake"
        LANGUAGES CXX)
add_executable(AppForNameBinary main.cpp)
target_compile_features(AppForNameBinary PRIVATE cxx_std_17)