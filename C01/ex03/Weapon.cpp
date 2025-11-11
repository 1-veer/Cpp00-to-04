#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {}


Weapon::~Weapon(){}

std::string const Weapon::getType()
{
    return type;
}
void Weapon::setType(std::string const type)
{
    this->type = type;
}