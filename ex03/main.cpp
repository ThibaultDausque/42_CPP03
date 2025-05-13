#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	std::cout << "### TESTING CLAPTRAP ###\n" << std::endl;
	{
		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		ClapTrap a;
		DiamondTrap	d;
		ClapTrap b("Cody");
		ScavTrap	terminator;
		ScavTrap	bob("Bobby");
		FragTrap	c;

		std::cout << "\033[34mTesting\033[0m" << std::endl;
		a.attack("some other robot");
		a.takeDamage(10);
		a.takeDamage(10);
		a.beRepaired(5);
		a.attack("some other other robot");
		terminator.attack("some hippie");
		terminator.takeDamage(10);
		terminator.guardGate();
		b.beRepaired(3);
		for (int i = 0; i < 3; i++)
			b.attack("Cody-clone");
		b.beRepaired(3);
		bob.attack("some xenomorph");
		bob.takeDamage(10);
		bob.beRepaired(5);
		c.attack("toto");
		c.takeDamage(10);
		c.beRepaired(10);
		c.highFivesGuys();
		d.attack("toto");
		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	}
	return (0);
}
