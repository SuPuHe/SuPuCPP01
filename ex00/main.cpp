/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 11:26:09 by omizin            #+#    #+#             */
/*   Updated: 2025/09/08 11:26:10 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie *p_zombie = newZombie("Pointed zombie");
	p_zombie->announce();
	randomChump("Regular zombie");
	delete p_zombie;
	return 0;
}
