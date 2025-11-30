#include "Zombie.hpp"

int main ()
{
    int n = 4;
    Zombie *Horde = zombieHorde(n, "ayoub");
    if (!Horde)
        return 1;

    for (int i=0 ; i < n ; i++)
        Horde[i].announce();

    delete[] Horde; 

    return 0;
}