#include "Weapon.hpp"

Weapon::Weapon(const std::string &t)
{
	setType(t);
	std::cout << "Created: " << type << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Deleted: " << type << std::endl;
}

std::string Weapon::getType() { return type; };
void		Weapon::setType(const std::string &t) { type = t; };
