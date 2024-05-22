#include "test_class.h"

HelloCMake::HelloCMake() : name("No-name") {}

HelloCMake::HelloCMake(std::string projectName) : name(projectName) {}

void HelloCMake::setName(std::string& projectName) {
	name = projectName;
}

void HelloCMake::getName() {
	std::cout << name << std::endl;
}