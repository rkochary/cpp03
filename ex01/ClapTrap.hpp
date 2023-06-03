#ifndef CLAPTRAP_HPP

#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        std::string _name;
        unsigned int _hitPoints;
        unsigned int _energyPoints;
        unsigned int _attackDamage;
    public:
        ClapTrap();
        ClapTrap(const std::string name);
        ClapTrap(const ClapTrap &obj);
        ClapTrap & operator=(const ClapTrap &obj);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        void	setName(std::string);
	    void	setHitPoints(unsigned int);
	    void	setEnergyPoints(unsigned int);
	    void	setAttackDamage(unsigned int);
};


#endif