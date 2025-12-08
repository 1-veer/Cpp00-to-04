#include "WrongCat.hpp"

WrongCat::WrongCat() : type("default")
{
    std::cout << "WrongCat default constructor called.\n";
}

WrongCat::WrongCat(std::string type) : type(type)
{
    std::cout << "WrongCat parameterized constructor called.\n";
}

WrongCat::WrongCat(const WrongCat&other) 
: type(other.type)
{
    std::cout << "WrongCat copy constructor called." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat&other)
{
    std::cout << "WrongCat copy assignment operator called." << std::endl;
    if (this!= &other)
        type = other.type;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called." << std::endl;
}
        
void WrongCat::makeSound() const
{
    std::cout << "Meoow" << std::endl;
}


