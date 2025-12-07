#include "FragTrap.hpp"
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

    std::cout << "\n-Creating our FragTraps :::::" << std::endl;
    FragTrap f1("Frag_AYOUB");
    FragTrap f2(f1);
    FragTrap f3;
    f3 = f1;

    std::cout << "\n-Testing FragTrap f1 :::::" << std::endl;
    f1.attack("chmikira");
    f1.takeDamage(40);
    f1.beRepaired(20);
    f1.highFivesGuys();
    f1.takeDamage(200);
    f1.highFivesGuys(); // should say it's dead

    std::cout << "\n-Testing FragTrap f2 and f3 :::::" << std::endl;
    f2.attack("bznaz");
    f3.highFivesGuys();

    std::cout << "\n-End (destructions call) :" << std::endl;
    return 0;
}
