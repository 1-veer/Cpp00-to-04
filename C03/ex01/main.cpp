#include "ScavTrap.hpp"

int main()
{
    std::cout << "-Creating our ClapTraps :::::" << std::endl;
    ClapTrap a("AYOUB");
    ClapTrap b(a);
    ClapTrap x(ClapTrap("TEMPORARY"));
    ClapTrap d("VEER");
    ClapTrap c;
    c = d;

    std::cout << "\n-Creating our ScavTraps :::::" << std::endl;
    ScavTrap s1("Scav_AYOUB");
    ScavTrap s2(s1);      
    ScavTrap s3;          
    s3 = s1;

    std::cout << "\n-Testing ClapTrap a ::::::" << std::endl;

    a.attack("ka3ko3");
    a.takeDamage(5);
    a.beRepaired(3);
    a.takeDamage(10);
    a.beRepaired(5);
    a.attack("k3iki3a");

    std::cout << "\n-Testing ScavTrap s1 :::::" << std::endl;
    s1.attack("ka3ko3");
    s1.takeDamage(20);
    s1.beRepaired(10);
    s1.guardGate();
    s1.takeDamage(200);
    s1.guardGate();   // should say it's dead

    std::cout << "\n-Testing ScavTrap s2 and s3 :::::" << std::endl;
    s2.attack("k3iki3a");
    s3.guardGate();

    std::cout << "\n-End (destructions call) :" << std::endl;
    return 0;
}
