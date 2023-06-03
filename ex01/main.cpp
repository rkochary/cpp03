#include "ScavTrap.hpp"

int main()
{
	ClapTrap	c_trap;
	ClapTrap	clap("Tiko");


	for (int i = 0; i < 5; i++)
		clap.attack("Baris");

	ScavTrap	s_trap;
	ScavTrap	scav("Narek");

	ScavTrap	scav2 = scav;
	
	for (int i = 0; i < 5; i++)
		scav.attack("Vahag");

	return 0;
}