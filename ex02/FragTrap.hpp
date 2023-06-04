#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
        public:
        FragTrap();
        FragTrap(const std::string name);
        FragTrap(const FragTrap &obj);
        FragTrap & operator=(const FragTrap &obj);
        ~FragTrap();
        void attack(const std::string& target);
        void highFivesGuys(void);
};

#endif