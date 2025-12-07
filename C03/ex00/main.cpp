#include "ClapTrap.hpp"

int main()
{
    std::cout << "-Creating our claptraps :::::" << std::endl;
    ClapTrap a("AYOUB");                     // param constructor
    ClapTrap b(a);                           // copy constructor
    ClapTrap x(ClapTrap("TEMPORARY"));       // temporary object (param const too) 
    ClapTrap d("VEER");                      // parameterized constructor
    ClapTrap c;                              // default constructor
    c = d;                                   // copy assignment op

    std::cout << "\n-Testing with a ::::::" << std::endl;

    a.attack("ka3ko3");                      // attack (-1 EP)
    a.takeDamage(5);                         // took damage (-5 HP)
    a.beRepaired(3);                         // repair (+3 HP) and  costs (-1 EP)
    a.takeDamage(10);                        // damage is more than HP -> death 
    a.beRepaired(5);                         // can't repair, HP = 0
    a.attack("k3iki3a");                     // can't attack, HP = 0

    std::cout << "\n-Testing (b) :::::" << std::endl;
    b.attack("chfar");                        
    b.takeDamage(9);
    for (int i = 0; i < 10; i++)
        b.beRepaired(1);                  // to exhaust EP
    b.attack("chfar");                     // should not have enough EP to attack
    b.takeDamage(10);

    std::cout << "\n-Testing (c) and (d) :::::" << std::endl;
    d.attack("bznaz");
    c.takeDamage(7);
    c.beRepaired(2);

    std::cout << "\n-End (destructions call) :" << std::endl;
    return 0;
}