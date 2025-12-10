#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource(void)
{
	std::cout << "IMateriaSource default constructor called" << std::endl;
}

IMateriaSource::IMateriaSource(IMateriaSource const &other)
{
    if (this != &other)
	    *this = other;
	std::cout << "IMateriaSource copy constructor called" << std::endl;
}

IMateriaSource& IMateriaSource::operator=(const IMateriaSource &other)
{
	(void)other;
	std::cout << "IMateriaSource copy assignment Operator Called" << std::endl;
	return (*this);
}