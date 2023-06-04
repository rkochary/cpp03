#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->_attackDamage = 20;
    this->_energyPoints = 50;
    this->_hitPoints = 100;
    std::cout << "Default Constractor called for ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(const std::string name)
{
    setName(name);
    this->_attackDamage = 0;
    this->_energyPoints = 10;
    this->_hitPoints = 10;
    std::cout << "Parameterized Constractor called for ScavTrap" << std::endl;
    std::cout << this->_name << " created as a ScavTrap" <<std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor called for ScavTrap " <<std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj)
{
    _name = obj._name;
    _hitPoints = obj._hitPoints;
    _energyPoints = obj._energyPoints;
    _attackDamage = obj._attackDamage;
    std::cout << "Copy Constractor called for ScavTrap" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &obj)
{
    if(this != &obj)
    {
        this->_name = obj._name;
        this->_hitPoints = obj._hitPoints;
        this->_energyPoints = obj._energyPoints;
        this->_attackDamage = obj._attackDamage;
    }
    std::cout << "Copy assignment operator called for ScavTrap" << std::endl;
    return (*this);
}

void ScavTrap::attack(const std::string& target)
{
    if(this->_energyPoints == 0)
    {
        std::cout << "ScavTrap " << this->_name << " doesn't have energy" << std::endl;
        return;
    }
    this->_energyPoints -= 1;
    std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_name << " is now in Gatekeeper mode" << std::endl;
}