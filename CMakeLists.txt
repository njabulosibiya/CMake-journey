message(STATUS "__EXECUTING_SRC__")

# Specify minimum version required for this project
cmake_minimum_required(VERSION 3.12)


# Constant name for project 
set(BINARY_NAME "CMakeJourney")


######### SYSTEM ENQUIRIES ###########

# Uses pre-populated variables to print message.
message(STATUS "${CMAKE_SYSTEM_NAME} ${CMAKE_HOST_SYSTEM_VERSION} OS build environment detected")

######### END SYSTEM ENQUIRIES ###########


# project details
# Set project name and stuff
# All is stored in variables which can be called later in the file
project(${BINARY_NAME} 
		VERSION 0.0.4
		DESCRIPTION "Testing ground for CMake & other programming concepts"
		LANGUAGES CXX
)

message(STATUS ${PROJECT_NAME})

# Disable in-source builds
if(PROJECT_SOURCE_DIR STREQUAL PROJECT_BINARY_DIR)
	message(FATAL_ERROR "In-source builds not allowed")
endif()

if(CMAKE_SOURCE_DIR STREQUAL CMAKE_BINARY_DIR)
	message(FATAL_ERROR "In-source builds not allowed")
endif()

message(STATUS "########## BUILD SUCCESS ##########") # Message on build success

# Include subdirectories
add_subdirectory(src)

# create build target for CMakeJourney project
add_executable(${BINARY_NAME} main.cpp)

# Include directory for header files into the current target
target_include_directories(${BINARY_NAME} PUBLIC ./include/)

# Link created OBJECT file of source files
target_link_libraries(${BINARY_NAME} PRIVATE src)



