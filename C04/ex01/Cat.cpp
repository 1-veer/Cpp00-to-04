#include "Cat.hpp"

Cat::Cat() : type("default") , brain(new Brain())
{
    std::cout << "Cat default constructor called.\n";
}

Cat::Cat(std::string type) : type(type), brain(new Brain())
{
    std::cout << "Cat parameterized constructor called.\n";
}

Cat::Cat(const Cat&other) 
: type(other.type), brain(new Brain(*other.brain))
{
    std::cout << "Cat copy constructor called." << std::endl;
}

Cat& Cat::operator=(const Cat&other)
{
    std::cout << "Cat copy assignment operator called." << std::endl;
    if (this!= &other)
    {
        type = other.type;
        delete brain;
        brain = new Brain(*other.brain);
    }
    return *this;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat destructor called." << std::endl;
}
        
void Cat::makeSound() const
{
    std::cout << "Meoow" << std::endl;
}

std::string Cat::getType() const
{
    return "Cat";
}


