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
		this->_name = obj.name;
		this->_hit = obj._hit;
		this->_energy = obj._energy;
		this->_damage = obj._damage;
	}
}

void	FragTrap::attack(const std::string& target)
{
	if (this->_energy > 0 || this->_hit > 0)
	{
		std::cout << "FragTrap " << this->_name << " attacks " << target
			<< ", causing " << this->_damage << " points of damage!" << std::endl;
		this->_energy--;
	}
	else if (this->_energy == 0)
	{
		std::cout << "FragTrap " << this->_name << " has not enough energy points to attack."
			<< std::endl;
	}
	else
		std::cout << "FragTrap" << this->_name << " has not enough hit points to attack." << std::endl;
}

void	FrafapTrap::takeDamage(unsigned int amount)
{
	std::cout << "FragTrap " << this->_name << " takes " << amount << " points of damage." << std::endl;
	this->_hit -= amount;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (this->_energy > 0 || this->_hit > 0)
	{
		std::cout << "FragTrap " << this->_name << " has been repaired of " << amount
			<< " points" << std::endl;
	}
	else if (this->_energy == 0)
		std::cout << "FragTrap " << this->_name << " has not enough energy points to recover." << std::endl;
	else
		std::cout << "FragTrap " << this->_name << " has not enough hit points to recover." << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " is asking for a high five !" << std::endl;
}
