/*	file:	main.cpp
*	Author:	Njabulo Sibiya
*	Date:	18 Aug 2024
* 
*	Dependencies: fmt
* 
*	Summary:
*		This program is a testing group for learning, experimeting & testing new ideas
*		in programming. To grow my skills in CMake project configuration. Other aspects
*		such as programming in of itself are left to another repo specified for such.
*/

// DEPENDENCIES
// Uses external string formatting library installed using vcpkg
#include <fmt/core.h>
#include <fmt/color.h>

#include <string>
#include "test_class.h"


/*	
	Can use "other.h" instead of using "other/other.h" (The file path)
	However, using this way helps with readability as it shows where the
	declaration file is located.
*/
#include "other/other.h"

using std::string;

void testFunction(std::string append = "0", int something = 0);

int main() {
	HelloCMake me;
	Other out("njabulo");
	Other another("Sibiya");

	fmt::print("fmt"); // Uses fmt library
	out.getName();
	testFunction(out.getName());

	return 0;
}

void testFunction(std::string append, int something) {
	fmt::print("Hello World!");
	fmt::print(fg(fmt::color::crimson) | fmt::emphasis::bold, "Hello, \n{}!", "world");

	if (append != "0")
		fmt::print(append);

}