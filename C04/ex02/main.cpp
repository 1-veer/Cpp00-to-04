#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    //Animal a; ->  ERROR: cannot instantiate abstract class

    Dog dog;
    Cat cat;

    // Using abstract class pointer
    // So we're using only a pointer or reference (just an address in memory) not an instance object
    
    // we "point to"/"reference(alias)" the Animal subObject inside dog and cat
    Animal* animal1 = &dog; // ptr
    Animal& animal2 = cat; // ref also works

    std::cout << "---------------" <<std::endl;

    // Polymorphic behavior
    std::cout << animal1->getType() << " says: ";
    animal1->makeSound();
    std::cout << animal2.getType() << " says: ";
    animal2.makeSound();

    std::cout << "---------------" <<std::endl;

    return 0;
}
