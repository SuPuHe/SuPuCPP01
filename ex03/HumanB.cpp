/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 11:26:56 by omizin            #+#    #+#             */
/*   Updated: 2025/09/08 11:26:57 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
