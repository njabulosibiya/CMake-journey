#include <iostream>
#include <string>
#include "test_class.h"
#include "other/other.h"

using std::string;

void testFunction(std::string append = "0", int something = 0);

int main() {
	HelloCMake me;
	Other out("njabulo");

	out.getName();
	testFunction(out.getName());

	return 0;
}

void testFunction(std::string append, int something) {
	std::cout << "Hello World!";

	if (append != "0")
		std::cout << append << std::endl;

}