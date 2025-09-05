#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string n) : name(n)
{
	std::cout << name << " created without weapon" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << name << " went home" << std::endl;
}

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
