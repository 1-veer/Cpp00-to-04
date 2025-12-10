#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"

class IMateriaSource
{
    public:
        IMateriaSource();
        IMateriaSource(const IMateriaSource&other);
        IMateriaSource& operator=(const IMateriaSource &other);

        virtual ~IMateriaSource();
        virtual void learnMateria(IMateriaSource*) = 0;
        virtual IMateriaSource* createMateria(std::string const & type) = 0;
};

#endif