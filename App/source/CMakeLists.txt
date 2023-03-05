cmake_minimum_required(VERSION 3.20)

set(CXX_STANDARD_REQUIRED ON) # Make C++ version a hard requirement
set(CMAKE_CXX_STANDARD 17) # Default C++ standard for targets
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${ADDITIONAL_CFLAGS} -g") # Enable Debug

# Project
project(AppForName
        VERSION 0.0.1
        DESCRIPTION "First try with cmake"
        LANGUAGES CXX)

# Shared Library
add_library(logger SHARED src/log.cpp)
target_include_directories(logger PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Static Library
add_library(lister STATIC src/list.cpp)
target_include_directories(lister PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Execute File
add_executable(AppForNameBinary 
        main.cpp
        src/fullName.cpp
        src/people.cpp
        )
target_include_directories(AppForNameBinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(AppForNameBinary PUBLIC logger lister)