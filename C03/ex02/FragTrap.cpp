#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    hp = 100;
    ep = 100;
    ad = 30;
    std::cout << "FragTrap default constructor called." << std::endl;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    hp = 100;
    ep = 100;
    ad = 30;
    std::cout << "FragTrap parameterized constructor called." << std::endl;
}
FragTrap::FragTrap(const FragTrap&other) : ClapTrap(other)
{
    std::cout << "FragTrap copy constructor called." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap&other)
{
    if (this!= &other)
        ClapTrap::operator=(other);
    std::cout << "FragTrap copy assignment operator called." << std::endl;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called." << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    if (hp > 0)
        std::cout << "FragTrap " << name << " is requesting a high five!" << std::endl;
    else
        std::cout << "FragTrap " << name << " can't request a high five because it's dead." << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (hp > 0 && ep > 0)
    {
        ep--;
        std::cout << "FragTrap " << name << " attacks " << target
                  << " causing " << ad << " points of damage!" << std::endl;
    }
    else if (hp <= 0)
        std::cout << "FragTrap " << name << " can't attack cuz it has no HP left." << std::endl;
    else
        std::cout << "FragTrap " << name << " can't attack cuz it has no EP left." << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
    if (hp == 0)
        std::cout << "FragTrap " << name << " is already dead." << std::endl;
    else if (hp > amount)
    {
        hp -= amount;
        std::cout << "FragTrap " << name << " took " << amount << " damage."
                  << " and now has " << hp << " HP , and " << ep << " EP left." << std::endl;
    }
    else
    {
        hp = 0;
        std::cout << "FragTrap " << name << " took " << amount << " damage and DIED." << std::endl;
    }
}

void FragTrap::beRepaired(unsigned int amount)
{
    if (hp > 0 && ep > 0)
    {
        ep--;
        hp += amount;
        std::cout << "FragTrap " << name << " gained " << amount << " HP, so now it has "
                  << hp << " HP, and " << ep << " EP left." << std::endl;
    }
    else if (hp <= 0)
        std::cout << "FragTrap " << name << " can't be repaired cuz it has no HP left." << std::endl;
    else
        std::cout << "FragTrap " << name << " can't be repaired cuz it has no EP left." << std::endl;
}

