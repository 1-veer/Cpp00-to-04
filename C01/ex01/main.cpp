#include "Zombie.hpp"

int main ()
{
    Zombie *Horde = zombieHorde(5, "ayoub");
    for (int i=0 ; i < 5 ; i++)
        Horde[i].announce();

    delete[] Horde; //empty cuz c++ already knows the size
    
    return 0;
}