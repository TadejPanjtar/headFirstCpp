project (DesignPatterns)
cmake_minimum_required (VERSION 2.6)

add_executable(1 1strategy/Tadej_test.cpp 1strategy/Tadej.cpp 1strategy/Tadej.h)
add_executable(2 2observer/observer.cpp)
add_executable(3 3decorator/decorator.cpp)
add_executable(4 4factory/factory.cpp)
add_executable(5 5singleton/singleton.cpp)
add_executable(6 6command/command.cpp)
add_executable(7 7adapter/adapter.cpp)
add_executable(8 8templateMethod/templateMethod.cpp)

add_subdirectory(misc miscBin)
