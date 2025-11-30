#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {}


Weapon::~Weapon(){}

const std::string& Weapon::getType()
{
    return type;
}
void Weapon::setType(const std::string type)
{
    this->type = type;
}
