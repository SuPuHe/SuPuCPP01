/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 11:27:05 by omizin            #+#    #+#             */
/*   Updated: 2025/09/08 11:27:06 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &t)
{
	setType(t);
	std::cout << "Created: " << type << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Deleted: " << type << std::endl;
}

std::string Weapon::getType() { return type; };
void		Weapon::setType(const std::string &t) { type = t; };
