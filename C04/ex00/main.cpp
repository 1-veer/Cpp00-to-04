#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
std::cout << "\n---Testing with virtual functions---\n" << std::endl;
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();

std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();

std::cout << "\n---Testing with non virtual functions---\n" << std::endl;

const WrongAnimal *x = new WrongCat();
std::cout << x->getType() << " " << std::endl;
x->makeSound();

std::cout << "\n---Destroying allocations---\n" << std::endl;

delete meta;
delete j;
delete i;
delete x;

return 0;
}   