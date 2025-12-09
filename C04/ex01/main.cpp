#include "Cat.hpp"
#include "Dog.hpp"


int main() 
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i; // testing for virtual destructor cuz in cat and dog's detructors we delete brain , so we must call them and to call them we should set base destructor as virtual so it calls the objects' (Dog and Cat) pointed to destructors 
    std::cout << "\n ----End of subj main test---\n" << std::endl;

    const int size = 10;
    const Animal* animals[size];

    for (int i = 0; i < size; i++) {
        if (i < size / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    std::cout << "\n--- Testing deep copy ---\n";

    // shows the importance of copy const (deep copy) , creating a new copy of everything 
    // especially for pointers cuz we allocate a new memory and copy the content to it so each object has its independent copy,
    // if not they'll have same copy and be pointing to same memory (same brain) , once deleted with tmp , doggo who is pointing to same brain will be pointing to nothing (dangling pointer)
    
    // SO we did it to ensure that destroying one object does not affect the other.
    Dog doggo;
    {          
        Dog tmpDog (doggo); // copy constructor (deep)
    } // tmpDog destroyed, doggo Brain must NOT be destroyed

    Cat catty;
    {
        Cat tmpCat (catty); 
    } 

    std::cout << "\n--- Deleting the array ---\n";
    for (int i = 0; i < size; i++) 
    {
        delete animals[i];
    }

    std::cout << "\n---Deleting the other Dog and Cat array (after outermost scope of main ends )---\n";
    return 0;
}