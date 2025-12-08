#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("default")
{
    std::cout << "WrongAnimal default constructor called.\n";
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
    std::cout << "WrongAnimal parameterized constructor called.\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal&other) 
: type(other.type)
{
    std::cout << "WrongAnimal copy constructor called." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal&other)
{
    std::cout << "WrongAnimal copy assignment operator called." << std::endl;
    if (this!= &other)
        type = other.type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called." << std::endl;
}
        
void WrongAnimal::makeSound () const
{
    std::cout << "making sound" << std::endl;
}
std::string WrongAnimal::getType() const
{
    return type;
}