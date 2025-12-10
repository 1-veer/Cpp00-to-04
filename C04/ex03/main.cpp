#include "IMateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int main()
{
    // Create MateriaSource and learn materias
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    // Create Characters
    ICharacter* me = new Character("me");
    ICharacter* bob = new Character("bob");

    // Equip materias
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    // Use materias on bob
    me->use(0, *bob);
    me->use(1, *bob);

    // Unequip materias (do NOT delete manually)
    me->unequip(0);  // ice
    me->unequip(1);  // cure

    // Attempt to use empty slots (should do nothing)
    me->use(0, *bob);
    me->use(1, *bob);

    // Test copy constructor & assignment operator
    Character copy(*dynamic_cast<Character*>(me));
    Character assign("assign");
    assign = *dynamic_cast<Character*>(me);

    // Equip new materias in copy and assign to check deep copy
    tmp = src->createMateria("ice");
    copy.equip(tmp);
    tmp = src->createMateria("cure");
    assign.equip(tmp);

    copy.use(0, *bob);
    assign.use(0, *bob);

    // Cleanup
    delete bob;
    delete me;
    delete src;

    return 0;
}


// int main()
// {
//     IMateriaSource* src = new MateriaSource();
//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());
    
//     ICharacter* me = new Character("me");
//     AMateria* tmp;

//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);

//     ICharacter* bob = new Character("bob");
//     me->use(0, *bob);
//     me->use(1, *bob);

//     me->unequip(0);  // removes Ice from inventory
//     me->unequip(1);  // removes Cure from inventory

//     delete bob;
//     delete me;
//     delete src;

//     return 0;
// }

// The main idea: work with pointers to base classes and virtual functions, 
// so you can call use() or clone() without knowing the exact type.
// This is classic OOP/polymorphism.