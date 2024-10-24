#[[
	THIS IS A NESTED PROJECT LIMITED TO THE LEARNING AND TESTING OF VCPKG FOR 
	WORKING WITH DEPENDENCIES. 

	IT IS NOT SO MUCH AS FOR PROGRAMMING THEN IT IS FOR CMAKE & VCPKG.

	ANY AND ALL WORK, LEARNING, REVISION, TEST & EXPERIMENTATION WITH VCPKG 
	SHOULD AND MUST BE DONE HERE.

	AS THIS IS IN ESSENCE, ITS OWN PROJECT, IT WITH AND MUST HAVE ITS OWN TARGET
	AS WELL.
]]

cmake_minimum_required(VERSION 3.12)

# Set global variable for the binary name of this project
set(BINARY_NAME VCPKG-PROJECT)

project(${BINARY_NAME}
	VERSION 0.0.1
	DESCRIPTION "Project to learn, test & experiment with dependency management with VCPKG "
	LANGUAGE CXX
)

# ================================================================ #
#[[
	THE FOLLOWING SECTION OF CODE FOCUSES ON VCPKG & DEPENDENCY MANAGEMENT.
]]


# ================================================================ #

add_executable(${BINARY_NAME} vcpkg.cpp)