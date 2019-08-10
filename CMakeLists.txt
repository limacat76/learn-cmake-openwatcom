cmake_minimum_required(VERSION 3.2 FATAL_ERROR)
project(learn-cmake-openwatcom VERSION 0.1 LANGUAGES C)

enable_testing()
add_subdirectory(src/hello)
add_subdirectory(src/alibrary)
add_subdirectory(src/libuser)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT hello)

get_cmake_property(_variableNames VARIABLES)
list (SORT _variableNames)
foreach (_variableName ${_variableNames})
    message(STATUS "${_variableName}=${${_variableName}}")
endforeach()