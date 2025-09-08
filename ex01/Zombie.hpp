/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 11:26:39 by omizin            #+#    #+#             */
/*   Updated: 2025/09/08 11:26:40 by omizin           ###   ########.fr       */
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

		void	setName(std::string name);

		Zombie();
		~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif
