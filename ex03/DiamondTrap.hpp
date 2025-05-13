#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"
# include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	_name;

	public:
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap	&operator=(const DiamondTrap& src);
		DiamondTrap(const DiamondTrap& cpy);
		void		attack(const std::string& target);

};

#endif
