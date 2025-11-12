#include "HumanA.hpp"

HumanA::HumanA(std::string const name, Weapon &weapon)
: name(name), weapon(weapon)           // as a ref it always needs to be set "can't be null or any defualt value"
{ 
    std::cout << name << " has been created" << std::endl;
}

HumanA::~HumanA()
{
    std::cout << name << " has been destroyed" << std::endl;
}

void HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
