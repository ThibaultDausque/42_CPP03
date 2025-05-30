#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap toto has been created !" << std::endl;
	this->_name = "toto";
	this->_hit = 10;
	this->_energy = 10;
	this->_damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap " << name << " has been created !" << std::endl;
	this->_name = name;
	this->_hit = 10;
	this->_energy = 10;
	this->_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
	*this = obj;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " destroyed !" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& obj)
{
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_hit = obj._hit;
		this->_energy = obj._energy;
		this->_damage = obj._damage;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_hit > 0 && this->_energy > 0)
	{
		std::cout << this->_name << " use an attack on " << target << std::endl;
		this->_energy--;
	}
	else if (this->_hit <= 0)
		std::cout << this->_name << " has not enough hit points to attack." << std::endl;
	else if (this->_energy <= 0)
		std::cout << this->_name << " has not enough energy points to attack." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_name << " takes " << amount << " points of damage." << std::endl;
	this->_hit -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy > 0 && this->_hit > 0)
	{
		std::cout << this->_name << " has been repaired of " << amount
			<< " points" << std::endl;
		this->_energy--;
		this->_hit += amount;
	}
	else if (this->_hit <= 0)
		std::cout << this->_name << " has not enough hit points to recover." << std::endl;
	else if (this->_energy <= 0)
		std::cout << this->_name << " has not enough energy points to recover." << std::endl;
}



