#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
		this->learn_inventory[i] = NULL;
	// std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &other)
{
    for (int i = 0; i < 4; i++)
		this->learn_inventory[i] = NULL;
    *this = other;
	// std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &other)
{
	// std::cout << "MateriaSource copy assignment Operator Called" << std::endl;
	if (this != &other)
    {
        for(int i=0 ; i<4 ; i++)
        {
            if (learn_inventory[i])
                delete learn_inventory[i];

            if (other.learn_inventory[i])
                learn_inventory[i] = other.learn_inventory[i]->clone();
            else 
                learn_inventory[i] = NULL;
        }
    }
	return (*this);
}

MateriaSource::~MateriaSource()
{
    for(int i=0 ; i<4 ; i++)
    {
        if(learn_inventory[i])
            delete learn_inventory[i];
    }
	// std::cout << "MateriaSource destructor called" << std::endl;
}

void MateriaSource::learnMateria(AMateria *materia)
{
    if (!materia)
        return;
    for(int i=0 ; i<4 ; i++)
    {
        if(learn_inventory[i] == NULL)
        {
            learn_inventory[i] = materia;
            std::cout << "MateriaSource learns " << materia->getType() << " in slot " << i << " of his learning inverntory " << std::endl;       
            return;
        }
    }
    std::cout <<"MateriaSource cannot learn " << materia->getType() << " cuz his learning inverntory is full " << std::endl;
    delete materia;
}

AMateria*	MateriaSource::createMateria(std::string const &type)
{
    for(int i=0 ; i<4 ; i++)
    {
        if(learn_inventory[i] != NULL && learn_inventory[i]->getType() == type)
            return learn_inventory[i]->clone();
    }
    std::cout << "MateriaSource can't create this type cuz it's unknown." << std::endl;
    return 0;
}

