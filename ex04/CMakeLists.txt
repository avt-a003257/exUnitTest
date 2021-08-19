
cmake_minimum_required(VERSION 3.10)

set(PROJECTNAME testDumbExample)
project(${PROJECTNAME} VERSION 0.0 LANGUAGES C CXX)

set(CPPUTEST_HOME cpputest-3.8)

#the memory leak macros
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -include ${CPPUTEST_HOME}/include/CppUTest/MemoryLeakDetectorNewMacros.h")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -include ${CPPUTEST_HOME}/include/CppUTest/MemoryLeakDetectorMallocMacros.h")

include_directories(
	.
	${CPPUTEST_HOME}/include
)

link_directories(
	${CPPUTEST_HOME}/lib
)

set(SOURCES
	dumbExample.c
	testDumbExample.cxx
)

add_executable(${PROJECTNAME} ${SOURCES})

target_link_libraries(${PROJECTNAME}
	CppUTest 
	CppUTestExt
)

