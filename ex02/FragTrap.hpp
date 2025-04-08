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

#include <iostream>
#include <string>

class FragTrap: public ClapTrap
{
	private:
		std::string	_name;
		int			_hit;
		int			_energy;
		int			_damage;

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& obj);
		FragTrap&	operator=(const FragTrap&);
		~FragTrap();
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		highFivesGuys(void);
};
