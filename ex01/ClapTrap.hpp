#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
	protected:
		std::string	_name;
		int			_hit;
		int			_energy;
		int			_damage;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& obj);
		ClapTrap&	operator=(const ClapTrap&);
		~ClapTrap();
		virtual void		attack(const std::string& target);
		virtual void		takeDamage(unsigned int amount);
		virtual void		beRepaired(unsigned int amount);
};

#endif
