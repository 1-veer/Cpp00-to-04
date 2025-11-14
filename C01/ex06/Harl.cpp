#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug( void )
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\n"
              << "I really do!\n" << std::endl;
}

void Harl::info( void )
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger! If you did, "
              << "I wouldn’t be asking for more!\n" << std::endl;
}
void Harl::warning( void )
{
    std::cout << "[ WARNING ]" << std::endl;
     std::cout << "I think I deserve to have some extra bacon for free.\nI've been coming for years, "
              << "whereas you started working here just last month.\n" << std::endl;
}
void Harl::error( void )
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

int giveback(std::string level)
{
    if (level == "DEBUG")
        return 1;
    else if (level == "INFO")
        return 2;
    else if (level == "WARNING")
        return 3;
    else if (level == "ERROR")
        return 4;
    return 0;
}

void defaul_t( void )
{
    std:: cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void Harl::complain( std::string level)
{
    int n = giveback(level);
    switch (n)
    {
    case 1:
        debug();
        info();
        warning();
        error();
        return;
    case 2:
        info();
        warning();
        error();
        return;
    case 3:
        warning();
        error();
        return;
    case 4:
        error();
        return;
    default:
        defaul_t();
        return;
    }
}