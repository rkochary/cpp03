#include "ClapTrap.hpp"

int main()
{
	ClapTrap	c_trap;
	ClapTrap	a("Tiko");
	ClapTrap	b("Rzmo");
	ClapTrap	c = a;
	a.setAttackDamage(50);
    b.setAttackDamage(1);
	for (int i = 0; i < 11; i++)
		a.attack("Baris");

	for (int i = 0; i < 5; i++)
		b.attack("Vagho");
    b.beRepaired(5);
	return 0;

}