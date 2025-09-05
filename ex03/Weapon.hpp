#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
	private:
		std::string type;
	public:
		std::string getType();
		void		setType(std::string &t);

		Weapon(std::string &t);
		~Weapon();
};

#endif
