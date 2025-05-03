#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap Terminator is alive !" << std::endl;
	this->_name = "Terminator";
	this->_hit = 100;
	this->_energy = 50;
	this->_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << name << " has been created." << std::endl;
	this->_name = name;
	this->_hit = 100;
	this->_energy = 50;
	this->_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& obj) : ClapTrap(obj)
{
	std::cout << "A copy of a ScavTrap has been completed." << std::endl;
	*this = obj;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " has been destroyed." << std::endl;
}

ScavTrap&	ScavTrap::operator=(const	ScavTrap& obj)
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

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in guard mode." << std::endl;
}

