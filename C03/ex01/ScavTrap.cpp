#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    hp = 100;
    ep = 50;
    ad = 20;
    std::cout << "ScavTrap default constructor called." << std::endl;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    hp = 100;
    ep = 50;
    ad = 20;
    std::cout << "ScavTrap parameterized constructor called." << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap&other) : ClapTrap(other)
{
    std::cout << "ScavTrap copy constructor called." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap&other)
{
    if (this!= &other)
        ClapTrap::operator=(other);
    std::cout << "ScavTrap copy assignment operator called." << std::endl;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called." << std::endl;
}

void ScavTrap::guardGate()
{
    if (hp > 0)
        std::cout << "ScavTrap " << name << " is now in Gate keeper mode!" << std::endl;
    else
        std::cout << "ScavTrap " << name << " can't guard the gate because it's dead." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (hp > 0 && ep > 0)
    {
        ep--;
        std::cout << "ScavTrap " << name << " attacks " << target
                  << " causing " << ad << " points of damage!" << std::endl;
    }
    else if (hp <= 0)
        std::cout << "ScavTrap " << name << " can't attack cuz it has no HP left." << std::endl;
    else
        std::cout << "ScavTrap " << name << " can't attack cuz it has no EP left." << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    if (hp == 0)
        std::cout << "ScavTrap " << name << " is already dead." << std::endl;
    else if (hp > amount)
    {
        hp -= amount;
        std::cout << "ScavTrap " << name << " took " << amount << " damage."
                  << " and now has " << hp << " HP , and " << ep << " EP left." << std::endl;
    }
    else
    {
        hp = 0;
        std::cout << "ScavTrap " << name << " took " << amount << " damage and DIED." << std::endl;
    }
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if (hp > 0 && ep > 0)
    {
        ep--;
        hp += amount;
        std::cout << "ScavTrap " << name << " gained " << amount << " HP, so now it has "
                  << hp << " HP, and " << ep << " EP left." << std::endl;
    }
    else if (hp <= 0)
        std::cout << "ScavTrap " << name << " can't be repaired cuz it has no HP left." << std::endl;
    else
        std::cout << "ScavTrap " << name << " can't be repaired cuz it has no EP left." << std::endl;
}

