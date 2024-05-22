#include <iostream>
#include <string>

class HelloCMake {
public:
	HelloCMake();
	HelloCMake(std::string projectName);
	//mutators
	void setName(std::string& projectName);
	//accessors
	void getName();

private:
	std::string name;
};