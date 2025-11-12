#include "Zombie.hpp"

// order of destruction between the stack ones and heap ones

int main ()
{
    randomChump("Stack zombie");

    Zombie *Z_heap = newZombie("Heap zombie");
    Z_heap->announce();

    delete (Z_heap);
    
    return 0;
}