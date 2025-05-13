#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include "ScavTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& obj);
		FragTrap&	operator=(const FragTrap&);
		~FragTrap();
		void		highFivesGuys(void);
};

#endif
