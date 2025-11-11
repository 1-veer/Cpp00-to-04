#include "HumanB.hpp"

HumanB::HumanB(std::string const name)
: name(name) , weapon("")
{
    std::cout << name << " has been created " << std::endl;
}

HumanB::~HumanB()
{
    std::cout << name << " has been destroyed " << std::endl;
}

void HumanB::attack()
{
    std::cout << name << " attacks with their " << weapon.getType() <<std::endl;
}
void HumanB::setWeapon(Weapon weapon)
{
    this->weapon = weapon;
} 