
cmake_minimum_required(VERSION 3.10)

set(PROJECTNAME testDumbExample)
project(${PROJECTNAME} VERSION 0.0 LANGUAGES C)

set(UNITY_HOME unity-2.5.2)

include_directories(
	.
	${UNITY_HOME}/include
)

link_directories(
	${UNITY_HOME}/lib
)

set(SOURCES
	testDumbExample.c
	dumbExample.c
)

add_executable(${PROJECTNAME} ${SOURCES})

target_link_libraries(${PROJECTNAME}
	unity
)
