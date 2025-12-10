#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	protected:
		AMateria	*learn_inventory[4];
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &copy);
		MateriaSource	&operator=(MateriaSource const &copy);
		~MateriaSource(void);

		void learnMateria(AMateria *materia);
		AMateria*	createMateria(std::string const &type);
};

#endif