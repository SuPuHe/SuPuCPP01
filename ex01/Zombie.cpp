#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "A zombie was created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "A zombie with name " << name
			<< " was deleted" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}
