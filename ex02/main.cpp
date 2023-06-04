#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap frag;
	FragTrap frag1("Poghos");
	frag = frag1;
	FragTrap frag2(frag1);
	frag1.highFivesGuys();
	return 0;
}