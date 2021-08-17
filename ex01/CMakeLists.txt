
cmake_minimum_required(VERSION 3.10)

set(PROJECTNAME testDumbExample)
project(${PROJECTNAME} VERSION 0.0 LANGUAGES C)

include_directories(
	.
	)

set(SOURCES
	unity.c
	testDumbExample.c
	dumbExample.c
	)

add_executable(${PROJECTNAME} ${SOURCES})
