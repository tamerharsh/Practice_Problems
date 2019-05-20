cmake_minimum_required(VERSION 3.4 )
project(practiceproject)

add_executable(mycode main.cpp)
INSTALL(TARGET mycode DESTINATION install/bin)
