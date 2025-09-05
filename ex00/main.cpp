#include "Zombie.hpp"

int	main()
{
	Zombie *p_zombie = newZombie("Pointed zombie");
	p_zombie->announce();
	randomChump("Regular zombie");
	delete p_zombie;
	return 0;
}
