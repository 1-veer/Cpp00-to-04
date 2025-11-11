#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

/* A private attribute type, which is a string.
• A getType() member function that returns a constant reference to type.
• A setType() member function that sets type using the new value passed as a parameter.*/

class Weapon {
    private :
        std::string type;
    
    public :
        Weapon(std::string type);
        ~Weapon();
        std::string const getType();
        void setType(std::string const type);
};

#endif