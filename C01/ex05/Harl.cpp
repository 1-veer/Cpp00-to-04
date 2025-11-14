#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\n"
              << "I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger! If you did, "
              << "I wouldn't be asking for more!" << std::endl;
}
void Harl::warning( void )
{
     std::cout << "I think I deserve to have some extra bacon for free.\nI've been coming for years, "
              << "whereas you started working here just last month." << std::endl;
}
void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
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
    std:: cout << "No valid argument, Try either:\n"
               << "./harl \"DEBUG\" , \"INFO\" , \"WARNING\" or \"ERROR\"" << std::endl;
}

void Harl::complain( std::string level)
{
    std::string all_levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    void (Harl::*all_functs[])( void ) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error }; 

    for (int i = 0; i < 4 ; i++)
    {
        if (level == all_levels[i])
        {
           (this->*all_functs[i])();  // this points to the current object of type Harl ()
           return;
        }
    }
    defaul_t();
}
