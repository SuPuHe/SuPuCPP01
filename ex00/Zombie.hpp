/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 11:26:24 by omizin            #+#    #+#             */
/*   Updated: 2025/09/08 11:26:24 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <new>
#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		void	announce(void);

		Zombie(std::string name);
		~Zombie();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
