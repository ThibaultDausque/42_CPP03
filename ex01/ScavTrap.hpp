/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdausque <tdausque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 21:14:44 by tdausque          #+#    #+#             */
/*   Updated: 2025/04/04 21:23:05 by tdausque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class ScavTrap
{
	private:
		std::string _name;
		int			_hit;
		int			_energy;
		int			_damage;

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& obj);
		ScavTrap&	operator=(const ScavTrap&);
		~ScavTrap();
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		guardGate();
};
