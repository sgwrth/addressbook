cmake_minimum_required(VERSION 3.25)
project(addressbook)
set(SOURCES
	./src/main.cpp
	./src/models/addressbook.cpp
	./src/models/category.cpp
)
add_executable(addressbook ${SOURCES})
target_include_directories(addressbook PRIVATE ./include)
