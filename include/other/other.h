/* other.h
 * 
 * Author:	Njabulo Sibiya (75039043+njabulosibiya@users.noreply.github.com)
 * Date:	17 June 2024
 * 
 * File Summary:
 *		This file is just to test the target_include_directories() CMake function & to better understand how to include header files.
 */

#include <string>

class Other {
public:
	Other();
	Other(std::string name);
	void setName(std::string& name);
	std::string getName() const;

private:
	std::string m_name;
};
