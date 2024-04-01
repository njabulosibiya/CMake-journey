#include <iostream>
#include <string>

using std::string;

void hello(){
 string name;

        std::cout << "Enter name: ";
        std::cin >> name;

        std::cout << "Hi " << name << "!" << std::endl;

}
