/*	File:	vcpkg.cpp
*	
*	Author: Njabulo Sibiya ()
*	Date:	24 October 2024
*	
*	Dependencies: fmt - format library
* 
*	Summary:
*	This file is for the testing of functionality for CMake VCPKG integration.
*	It is not a fully functioning application and is limited to the scope of 
*	testing and programming with dependencies that are provided with CMake.
* 
*	NOTE:
*	The main focus is to work with CMake VCPKG and not c++ in this project, thus
*	there should be a higher focus on the CMake and VCPKG than the actual C++.

*/

#include <iostream>
#include <string>

//dependencies 
#include <fmt/core.h>

int main() {
	std::string name("Njabulo");

	fmt::print("{}!", name);

	return 0;
}