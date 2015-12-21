cmake_minimum_required(VERSION 2.8.12.2)
project(game)

#Bring the headers, such as Student.h into the project
include_directories(../engine)

#Can manually add the sources using the set command as follows:
#set(SOURCES src/mainapp.cpp src/Student.cpp)

#However, the file(GLOB...) allows for wildcard additions:
file(GLOB SOURCES "../main.cpp" "../engine/core/*.cpp" "../engine/resources/*.cpp")

add_executable(main ${SOURCES})
