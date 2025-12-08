#ifndef WrongCat_HPP
#define WrongCat_HPP

#include "Animal.hpp"

class WrongCat : public Animal
{
    protected:
        std::string type;

    public:
        WrongCat();
        WrongCat(std::string name);
        WrongCat(const WrongCat&other);
        WrongCat& operator=(const WrongCat&other);
        virtual ~WrongCat();
        
        void makeSound() const;
};

#endif