#include "AMateria.hpp"

AMateria::AMateria(void) : type("default")
{
    //std::cout << "AMateria default constructor called.\n";
}

AMateria::AMateria(std::string const & type) : type(type)
{
    //std::cout << "AMateria parameterized constructor called.\n";
}

AMateria::AMateria(const AMateria &other) 
: type(other.type)
{
    //std::cout << "AMateria copy constructor called." << std::endl;
}

AMateria& AMateria::operator=(const AMateria &other)
{
    // std::cout << "AMateria copy assignment operator called." << std::endl;
    if (this!= &other)
        type = other.type;
    return *this;
}

AMateria::~AMateria()
{
       //std::cout << "AMateria destructor called." << std::endl;
}

std::string const & AMateria::getType() const //Returns the materia type
{
    return type;
}

/////////
void AMateria::use(ICharacter& target)
{
    (void)target; // default behavior does nothing
}