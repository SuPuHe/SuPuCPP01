#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N < 1)
	{
		std::cout << "Need at least 1 zombie" << std::endl;
		return (NULL);
	}
	Zombie *z_horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		z_horde[i].setName(name);
	return(z_horde);
}
