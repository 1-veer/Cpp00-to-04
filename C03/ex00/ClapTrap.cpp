#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("default"), hp(10), ep(10), ad(0) 
{
    std::cout << "ClapTrap default constructor called.\n";
}

ClapTrap::ClapTrap(std::string name) : name(name), hp(10), ep(10), ad(0) 
{
    std::cout << "ClapTrap parameterized constructor called.\n";
}

ClapTrap::ClapTrap(const ClapTrap&other) 
: name(other.name), hp(other.hp), ep(other.ep), ad(other.ad)
{
    std::cout << "ClapTrap copy constructor called." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap&other)
{
    std::cout << "ClapTrap copy assignment operator called." << std::endl;
    if (this!= &other)
    {
        name = other.name;
        hp = other.hp;
        ep = other.ep;
        ad = other.ad;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called." << std::endl;
}
        
void ClapTrap::attack(const std::string& target)
{
    if (hp > 0 && ep > 0)
    {
        ep--;
        std::cout << "ClapTrap " << name << " attacks " << target 
                  << " causing "  << ad << " points of damage!" << std::endl;
    }
    else if (hp <= 0)
        std::cout << "ClapTrap " << name << " can't attack cuz it has no HP left." << std::endl;
    else 
        std::cout << "ClapTrap " << name << " can't attack cuz it has no EP left." << std::endl;    
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hp == 0)
        std::cout << "ClapTrap " << name << " is already dead." << std::endl;
    else if (hp > amount)
    {
        hp-=amount;
        std::cout << "ClapTrap " << name << " took " << amount << " damage." 
                  << " and now has " << hp << " HP , and " << ep << " EP left." << std::endl;
    }
    else  
    {
        hp = 0;
        std::cout << "ClapTrap " << name << " took " << amount << " damage and DIED." << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hp > 0 && ep > 0)
    {
        ep--;
        hp+=amount;
        std::cout << "ClapTrap " << name << " gained " << amount << " HP, so now it has " 
                  << hp << " HP, and " << ep << " EP left."<< std::endl;
    }
    else if (hp <= 0)
        std::cout << "ClapTrap " << name << " can't be repaired cuz it has no HP left." << std::endl;
    else 
        std::cout << "ClapTrap " << name << " can't be repaired cuz it has no EP left." << std::endl;    
}


