#include <iostream>
#include <string>

int main ()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Memory addresses :" << std::endl;
    std::cout << "The memory address of the string variable is : " << &str << std::endl;
    std::cout << "The memory address held by stringPTR is : " << &stringPTR << std::endl;
    std::cout << "The memory address held by stringREF is : " << &stringREF << std::endl;

    std::cout << std::endl;

    std::cout << "Values :" << std::endl;
    std::cout << "the value of the string variable is : " << str << std::endl;
    std::cout << "The value pointed to by stringPTR is : " << stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF is : " << stringREF << std::endl;

    return 0;
} 