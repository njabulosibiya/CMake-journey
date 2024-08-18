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

#[[
 Finds library package needed as dependency
 
 Generates error if package is not found as it is set to REQUIRED

 vcpkg & CMakePresets.json are not configure here in the source but rather in the parent directory
 As these are system dependent and stuff, but I need to revise CMakePresets.json and vcpkg in detail

 ------------

 REMEMBER

 vcpkg configured in in the parent directory of the source code thus the source code is clean and only
 calls for the package, how the package is installed or managed is beyond the scope of cmake & is 
 irrelevent to the source code (Atleast that is how I understand it for now)
#]]
find_package(fmt CONFIG REQUIRED)


message(STATUS ${PROJECT_NAME})

# Disable in-source builds
if(PROJECT_SOURCE_DIR STREQUAL PROJECT_BINARY_DIR)
	message(FATAL_ERROR "In-source builds not allowed")
endif()

# Disable creation of build directory as subfolder in source directory.
# This is to prevent having to use .gitingnore, thus keeping the file clean
if(PROJECT_BINARY_DIR STREQUAL "${CMAKE_CURRENT_SOURCE_DIR}/Build" OR "${CMAKE_CURRENT_SOURCE_DIR}/build")
	message(FATAL_ERROR "sub-directory build not allowed!")
endif()

message(STATUS "########## BUILD SUCCESS ##########") # Message on build success

# Include subdirectories
add_subdirectory(src)

# create build target for CMakeJourney project
add_executable(${BINARY_NAME} main.cpp)



########### LINKING DEPENDENCIES TO TARGET ########### 
# Include directory for header files into the current target
target_include_directories(${BINARY_NAME} PUBLIC ./include/)

# Link created OBJECT file of source files
target_link_libraries(${BINARY_NAME} PRIVATE src)

# Once package has been found, link target to the fmt library
target_link_libraries(${BINARY_NAME} PRIVATE fmt::fmt)
########### END LINKING DEPENDENCIES TO TARGET ########### 