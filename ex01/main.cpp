#include "Zombie.hpp"

int main(void)
{
	Zombie *z_horde;
	int num = 0;

	z_horde = zombieHorde(num, "SuPuHe");
 	for (int i = 0; i < num; i++)
	{
		std::cout << i << ": ";
		z_horde[i].announce();
	}

	delete[] z_horde;
	return (0);
}
