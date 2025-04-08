/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdausque <tdausque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 21:14:44 by tdausque          #+#    #+#             */
/*   Updated: 2025/04/04 21:23:05 by tdausque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap Terminator has been created !" << std::endl;
	this->_name = "Terminator";
	this->_hit = 100;
	this->_energy = 50;
	this->_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << name << " has been created !" << std::endl;
	this->_name = name;
	this->_hit = 100;
	this->_energy = 50;
	this->_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& obj) : ClapTrap(obj)
{
	std::cout << "ScavTrap constructor copy called !" << std::endl;
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

void	ScavTrap::attack(const std::string& target)
{
	if (this->_energy > 0 || this->_hit > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target
			<< ", causing " << this->_damage << " points of damage!" << std::endl;
		this->_energy--;
	}
	else if (this->_energy == 0)
	{
		std::cout << "ScavTrap " << this->_name << " has not enough energy points to attack."
			<< std::endl;
	}
	else
		std::cout << "ScavTrap" << this->_name << " has not enough hit points to attack." << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "ScavTrap " << this->_name << " takes " << amount
		<< " points of damage." << std::endl;
	this->_hit -= amount;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_energy > 0 || this->_hit > 0)
	{
		std::cout << "ScavTrap " << this->_name << " has been repaired of " << amount
			<< " points" << std::endl;
	}
	else if (this->_energy == 0)
		std::cout << "ScavTrap " << this->_name << " has not enough energy points to recover." << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " has not enough hit points to recover." << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in guard mode." << std::endl;
}

