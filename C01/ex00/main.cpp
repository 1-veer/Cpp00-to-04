#include "Zombie.hpp"

int main ()
{
    randomChump("Stack zombie");

    Zombie *Z_heap = newZombie("Heap zombie");
    Z_heap->announce();

    delete (Z_heap);
    
    return 0;
}