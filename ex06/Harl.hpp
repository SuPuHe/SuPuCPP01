/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 12:45:54 by omizin            #+#    #+#             */
/*   Updated: 2025/09/10 12:45:55 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
	private:
		void debug ( void );
		void info( void );
		void warning( void );
		void error( void );

	public:
		void complain( std::string level );
		Harl();
		~Harl();
};

#endif
