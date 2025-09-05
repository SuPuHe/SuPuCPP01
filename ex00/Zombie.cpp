#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << "A zombie with name " << this->name
			<< " was created" << std::endl;
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
