#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap Robocop has been created !" << std::endl;
	this->_name = "Robocop";
	this->_hit = 100;
	this->_energy = 100;
	this->_damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap " << name << " has been created !" << std::endl;
	this->_name = name;
	this->_hit = 100;
	this->_energy = 100;
	this->_damage = 30;
}

FragTrap::FragTrap(const FragTrap& obj) : ClapTrap(obj)
{
	std::cout << "FragTrap constructor copy called !" << std::endl;
	*this = obj;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name
		<< " has been destroyed." << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& obj)
{
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_hit = obj._hit;
		this->_energy = obj._energy;
		this->_damage = obj._damage;
	}
	return *this;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " is asking for a high five !" << std::endl;
}
