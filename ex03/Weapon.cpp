#include "Weapon.hpp"

Weapon::Weapon(const std::string &t)
{
	setType(t);
}

Weapon::~Weapon(){}

std::string Weapon::getType() { return type; };
void		Weapon::setType(const std::string &t) { type = t; };
