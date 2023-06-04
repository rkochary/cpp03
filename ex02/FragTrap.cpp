#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->_attackDamage = 30;
    this->_energyPoints = 100; 
    this->_hitPoints = 100;
    std::cout << "Default Constractor called for FragTrap" << std::endl;
}

FragTrap::FragTrap(const std::string name) : ClapTrap()
{
    setName(name);
    this->_attackDamage = 0;
    this->_energyPoints = 10;
    this->_hitPoints = 10;
    std::cout << "Parameterized Constractor called for FragTrap" << std::endl;
    std::cout << this->_name << " created as a FragTrap" <<std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor called for FragTrap " <<std::endl;
}

FragTrap::FragTrap(const FragTrap &obj)
{
    _name = obj._name;
    _hitPoints = obj._hitPoints;
    _energyPoints = obj._energyPoints;
    _attackDamage = obj._attackDamage;
    std::cout << "Copy Constractor called for FragTrap" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap &obj)
{
    if(this != &obj)
    {
        this->_name = obj._name;
        this->_hitPoints = obj._hitPoints;
        this->_energyPoints = obj._energyPoints;
        this->_attackDamage = obj._attackDamage;
    }
    std::cout << "Copy assignment operator called for FragTrap" << std::endl;
    return (*this);
}

void FragTrap::attack(const std::string& target)
{
    if(this->_energyPoints == 0)
    {
        std::cout << "FragTrap " << this->_name << " doesn't have energy" << std::endl;
        return;
    }
    this->_energyPoints -= 1;
    std::cout << "FragTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << this->_name << " says 'High Five Guys!!'" << std::endl;
}