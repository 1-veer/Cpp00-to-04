#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{       
     public:
        Cure();
        Cure(const Cure&other);
        Cure& operator=(const Cure&other);
        ~Cure();
        
        AMateria* clone() const; // can be Ice*
        void use(ICharacter& target);
};

#endif