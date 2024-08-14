#include "other.h"

Other::Other() : m_name(" ") {}

void Other::setName(std::string& name) {
	m_name = name;
}

Other::Other(std::string name) : m_name(name) {}

std::string Other::getName() const {
	return m_name;
}