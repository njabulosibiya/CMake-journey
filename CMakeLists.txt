message(STATUS "EXECUTING SRC")

# Specify version required for project
cmake_minimum_required(VERSION 3.12)

# project details
# Set project name and stuff
# All is stored in variables which can be called later in the file
project(CMakeJourney CXX)

# Disable in-source builds
if(PROJECT_SOURCE_DIR STREQUAL PROJECT_BINARY_DIR)
	message(FATAL_ERROR "In-source builds nor allowed")
endif()
message(STATUS "BUILD SUCCESS") # Message on build success

# create build target for CMakeJourney project
add_executable(CMakeJourney main.cpp)

# Include directory for header files into the current target
include_directories(include)

# Include subdirectories
add_subdirectory(src)

# Link created OBJECT file of source files
target_link_libraries(CMakeJourney PRIVATE src)
