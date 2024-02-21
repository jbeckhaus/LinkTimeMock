cmake_minimum_required(VERSION 3.14)

project(OneAmazingProject)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(
        theOneAndOnlyApp
        main.cpp
        Dependency.cpp
        ImportantClass.cpp
)

add_subdirectory(test)
