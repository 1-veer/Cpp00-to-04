#include "ICharacter.hpp"

ICharacter::ICharacter(void)
{
	std::cout << "ICharacter default constructor called" << std::endl;
}

ICharacter::ICharacter(ICharacter const &other)
{
    if (this != &other)
	    *this = other;
	std::cout << "ICharacter copy constructor called" << std::endl;
}

ICharacter& ICharacter::operator=(const ICharacter &other)
{
	(void)other;
	std::cout << "ICharacter copy assignment Operator Called" << std::endl;
	return (*this);
}