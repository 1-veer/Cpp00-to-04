#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"


class Dog : public Animal
{
    protected:
        std::string type;

    public:
        Dog();
        Dog(std::string name);
        Dog(const Dog&other);
        Dog& operator=(const Dog&other);
        virtual ~Dog();
        
        void makeSound() const;
};

#endif