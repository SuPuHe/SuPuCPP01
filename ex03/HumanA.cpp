/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 11:26:51 by omizin            #+#    #+#             */
/*   Updated: 2025/09/08 11:26:52 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
