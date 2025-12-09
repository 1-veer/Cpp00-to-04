#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
    protected:
        std::string type;

    public:
        Animal();
        Animal(std::string name);
        Animal(const Animal&other);
        Animal& operator=(const Animal&other);
        virtual ~Animal();
        
        virtual std::string getType() const = 0;
        virtual void makeSound() const = 0;
};

#endif