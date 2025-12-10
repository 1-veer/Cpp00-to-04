#include "IMateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    
    ICharacter* me = new Character("me");
    AMateria* tmp;

    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);

    me->unequip(0);  // removes Ice from inventory
    me->unequip(1);  // removes Cure from inventory

    delete bob;
    delete me;
    delete src;

    return 0;
}


// int main ()
// {
//     Character c("droppy");

//         AMateria* m1 = new Ice();
//         AMateria* m2 = new Cure();

//         c.equip(m1);
//         c.equip(m2);

//         c.unequip(0); // must not delete m1
//         c.unequip(1); // must not delete m2
//         c.unequip(2); // no crash
//         c.unequip(3); // no crash
//         c.unequip(-1); // ignored safely

//         // already done 
//         // delete m1;
//         // delete m2;
// }

//to stress the unequip array
// int main ()
// {
//     Character c("droppy");

//         for (int i = 0; i < 10; i++)
//         {
//             AMateria* m;
//             if (i % 2 == 0)
//                 m = new Ice();
//             else
//                 m = new Cure();
//             c.equip(m);
//             c.unequip(0);                                 
//         }
// }

// int main()
// {
//     // Create MateriaSource and learn materias
//     IMateriaSource* src = new MateriaSource();
//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());

//     // Create Characters
//     ICharacter* me = new Character("me");
//     ICharacter* bob = new Character("bob");

//     // Equip materias
//     AMateria* tmp;
//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);

//     // Use materias on bob
//     me->use(0, *bob);
//     me->use(1, *bob);
    
//     // Unequip materias (do NOT delete manually)
//     me->unequip(0);  // ice
//     me->unequip(1);  // cure

//     // Attempt to use empty slots (should do nothing)
//     me->use(0, *bob);
//     me->use(1, *bob);

//     // Test copy constructor & assignment operator
//     Character copy(*dynamic_cast<Character*>(me));
//     Character assign("assign");
//     assign = *dynamic_cast<Character*>(me);

//     // Equip new materias in copy and assign to check deep copy
//     tmp = src->createMateria("ice");
//     copy.equip(tmp);
//     tmp = src->createMateria("cure");
//     assign.equip(tmp);

//     copy.use(0, *bob);
//     assign.use(0, *bob);

//     // Cleanup
//     delete bob;
//     delete me;
//     delete src;

//     return 0;
// }


// The main idea: work with pointers to base classes and virtual functions, 
// so you can call use() or clone() without knowing the exact type.
// This is classic OOP/polymorphism.