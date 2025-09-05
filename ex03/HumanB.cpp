#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string n) : name(n) {}

HumanB::~HumanB(){}

void HumanB::attack(void)
{
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " attacks with their hands" << std::endl;
}

void HumanB::setWeapon(Weapon &w)
{
	weapon = &w;
}
