/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 12:45:42 by omizin            #+#    #+#             */
/*   Updated: 2025/09/10 12:45:43 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Harl created" << std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl deleted" << std::endl;
}

void Harl::debug( void )
{
	std::cout << "DEBUG: I love having extra bacon for my" \
		"7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
	std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn't put" \
		"enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "WARNING: I think I deserve to have some extra bacon for free. I've been coming for" \
		"years, whereas you started working here just last month." << std::endl;
}

void Harl::error( void )
{
	std::cerr << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*functions[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*functions[i])();
			return;
		}
	}
	std::cerr << "Unknown command: " << level << std::endl;
}
