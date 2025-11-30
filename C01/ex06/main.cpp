#include "Harl.hpp"

int main (int ac, char *av[])
{
    if (ac == 2)
    {
        Harl harl;
        harl.complain(av[1]);
    }
    else 
    {
         std:: cout << "Non valid arguments, Try either:\n"
               << "./harl \"DEBUG\" , \"INFO\" , \"WARNING\" or \"ERROR\"" << std::endl;
        return 1;
    }
    return 0;
}