#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice default constructor called.\n";
}


Ice::Ice(const Ice &other) 
: AMateria(other.type)
{
    std::cout << "Ice copy constructor called." << std::endl;
}

Ice& Ice::operator=(const Ice &other)
{
    std::cout << "Ice copy assignment operator called." << std::endl;
    if (this!= &other)
        type = other.type;
    return *this;
}

Ice::~Ice()
{
       std::cout << "Ice destructor called." << std::endl;
}

AMateria* Ice::clone() const
{
    return new Ice(*this); //return a new instance of the same type using copy constructor
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}