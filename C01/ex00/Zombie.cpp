#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name)
{
    // Constructor body (if needed)
}

Zombie::~Zombie ()
{
    std::cout << name << " has been destroyed ." << std::endl;
}

void Zombie::announce() const
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}