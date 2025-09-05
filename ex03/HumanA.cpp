#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon &w) : name(n), weapon(w)
{
	std::cout << name << " created with " << weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
	std::cout << name << " went home" << std::endl;
}

void HumanA::attack(void)
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
