cmake_minimum_required(VERSION 3.2)

project(graphEd VERSION 0.0.$ENV{TRAVIS_BUILD_NUMBER})

add_executable(graphEd GraphEd.cpp Controller.cpp GUI.cpp Hw5GraphEd.cpp PrimitivesHolder.cpp)
include_directories(./)
set_target_properties(
	graphEd  PROPERTIES
	CXX_STANDARD 14
	CXX_STANDARD_REQUIRED ON
	COMPILE_OPTIONS -Wpedantic -Wall -Wextra
)
