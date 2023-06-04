#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->_attackDamage = 0;
    this->_energyPoints = 10;
    this->_hitPoints = 10;
    std::cout << "Default Constractor called for ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(const std::string name)
{
    setName(name);
    this->_attackDamage = 0;
    this->_energyPoints = 10;
    this->_hitPoints = 10;
    std::cout << this->_name << " created as a ClapTrap" <<std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called for ClapTrap" <<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
    _name = obj._name;
    _hitPoints = obj._hitPoints;
    _energyPoints = obj._energyPoints;
    _attackDamage = obj._attackDamage;
    std::cout << "Copy Constractor called for ClapTrap" << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &obj)
{
    if(this != &obj)
    {
        this->_name = obj._name;
        this->_hitPoints = obj._hitPoints;
        this->_energyPoints = obj._energyPoints;
        this->_attackDamage = obj._attackDamage;
    }
    std::cout << "Copy assignment operator called for ClapTrap" << std::endl;
    return (*this);
}

void ClapTrap::setName(std::string name)
{
    this->_name = name;
}

void ClapTrap::setHitPoints(unsigned int amount)
{
    this->_hitPoints = amount;
}

void ClapTrap::setEnergyPoints(unsigned int amount)
{
    this->_energyPoints = amount;
}

void ClapTrap::setAttackDamage(unsigned int amount)
{
    this->_attackDamage = amount;
}

void ClapTrap::attack(const std::string& target)
{
    if(this->_energyPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " doesn't have energy" << std::endl;
        return;
    }
    this->_energyPoints -= 1;
    std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->_hitPoints > amount)
    {
        this->_hitPoints -= amount;
    }
    else
    {
        _hitPoints = 0;
        std::cout << "ClapTrap " << this->_name << " has died" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->_energyPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " doesn't have energy" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->_name << " gained " << amount << " hitpoints" << std::endl;
    this->_hitPoints += amount;
    this->_energyPoints -= 1;
}