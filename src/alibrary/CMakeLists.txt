cmake_minimum_required(VERSION 3.12)
project(alibrary LANGUAGES C)
if (NOT DEFINED DISABLE_GOOGLE_TESTS)
	include(Cmake.GoogleTest.txt)
endif(NOT DEFINED DISABLE_GOOGLE_TESTS)

add_library(
	alibrary
	src/alibrary.c
)

target_include_directories(alibrary PUBLIC
	$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
	$<INSTALL_INTERFACE:include>
	PRIVATE src
)

if (NOT DEFINED DISABLE_GOOGLE_TESTS)
	add_executable(
		testlib
		test/testlib.cpp
	)

	set_target_properties(testlib PROPERTIES 
		ALIBRARY_IMPORT 1
		LINKER_LANGUAGE CXX
	)

	target_link_libraries(
		testlib
		alibrary
		gtest
		gtest_main
	)

	enable_testing()

	add_test(NAME testlib COMMAND alibrary)
endif(NOT DEFINED DISABLE_GOOGLE_TESTS)

