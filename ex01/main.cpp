/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 11:26:28 by omizin            #+#    #+#             */
/*   Updated: 2025/09/08 11:26:29 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
