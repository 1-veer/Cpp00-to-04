#include "Dog.hpp"

Dog::Dog() : type("Dog"), brain(new Brain())
{
    std::cout << "Dog default constructor called.\n";
}

Dog::Dog(std::string type) : type(type), brain(new Brain())
{
    std::cout << "Dog parameterized constructor called.\n";
}

Dog::Dog(const Dog&other) 
: type(other.type), brain(new Brain(*other.brain))
{
    std::cout << "Dog copy constructor called." << std::endl;
}

Dog& Dog::operator=(const Dog&other)
{
    std::cout << "Dog copy assignment operator called." << std::endl;
    if (this!= &other)
    {
        type = other.type;
        delete brain;
        brain = new Brain(*other.brain);
    }
    return *this;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog destructor called." << std::endl;
}
        
void Dog::makeSound() const
{
    std::cout << "whoof whoof" << std::endl;
}

std::string Dog::getType() const
{
    return "Dog";
}

