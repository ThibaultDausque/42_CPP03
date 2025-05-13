#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(), ScavTrap(), FragTrap()
{
	this->_name = ClapTrap::_name + "_clap_name";
	this->_energy = ScavTrap::_energy;
	this->_hit = FragTrap::_hit;
	this->_damage = FragTrap::_damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& cpy): ClapTrap(cpy), ScavTrap(cpy), FragTrap(cpy)
{
	std::cout << "DiamondTrap copy done." << std::endl;
	*this = cpy;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& src)
{
	if (this != &src)
	{
		this->_name = src._name + "_clap_name";
		this->_energy = src._energy;
		this->_hit = src._hit;
		this->_damage = src._damage;
	}
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->_name << " has been destroyed." << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	this->ScavTrap::attack(target);	
}
