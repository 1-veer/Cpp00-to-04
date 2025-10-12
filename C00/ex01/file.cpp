#include <iostream>
#include <cstring>

class Contacts{
    private:
        std::string name;
        int number;
    
    Contacts(std::string name ,int number){
        this->name = name;
        this->number = number;
    }
    Contacts getContact(){

    }
    Contacts setContact(){
        
    }
};

class Phonebook{
    private :
        Contacts contacts[8];

};

int main ()
{
    std::string s;
    while(1)
    {
    std::cout<<"enter one of the 3 commands\n";
    std::cin >> s;
    if ( s == "EXIT" )
        return 0;
    else
            std::cout<<"ok\n";
    }
    return 0;
}