/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:01:45 by abougati          #+#    #+#             */
/*   Updated: 2025/10/16 13:48:51 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstring>

class Contact
{
    private:
        std::string first_name; 
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    
    public:
    Contact(){}
    void set_infos (std::string first_name ,std::string last_name 
                ,std::string nickname, std::string phone_number ,std::string darkest_secret)
    {
        this->first_name = first_name;
        this->last_name = last_name;
        this->nickname = nickname;
        this->phone_number = phone_number;
        this->darkest_secret = darkest_secret; 
    }
    std::string get_firstname()
    {
        return (first_name);
    }
    std::string get_lastname()
    {
        return (last_name);
    }
    std::string get_nickname()
    {
        return (nickname);
    }
    std::string get_number()
    {
        return (phone_number);
    }
    std::string get_secret()
    {
        return (darkest_secret);
    }
};

class Phonebook{
    private :
        Contact contacts[8];
        int index;
        int count;
    
    public:
    Phonebook ()
    {
        index = 0;
        count = 0;
    }
    
    void addContact()
    {
        std::string firstname, lastname, nickname, number, secret;
        std::cout << "Enter first name : " ;
        std::cin >> firstname;
        std::cout << "Enter last name : " ;
        std::cin >> lastname;
        std::cout << "Enter nickname : " ;
        std::cin >> nickname;
        std::cout << "Enter phone number : " ;
        std::cin >> number;
        std::cout << "Enter darkest secret : " ;
        std::cin >> secret;
        
        if (index < 8)
            contacts[index].set_infos(firstname, lastname, nickname, number, secret);
        else 
            contacts[7].set_infos(firstname, lastname, nickname, number, secret);
        index = (index + 1) % 8;
        if (count < 8)
            count ++;
    }
    
    void searchContact()
    {
        std::cout << "-------------------------------------------\n";
        std::cout << std::setw(10) << "index" << "|";    
        std::cout << std::setw(10) << "first name" << "|";    
        std::cout << std::setw(10) << "last name" << "|";    
        std::cout << std::setw(10) << "nickname" << "|\n";    
        std::cout << "-------------------------------------------\n";
    
        for (int i=0 ; i < count ; i++)
        {
            std::cout << std::setw(10) << i << "|";
            
            std::string first_name = contacts[i].get_firstname();
            if (first_name.length() > 10)
                first_name = first_name.substr(0,9) + ".";
            
            std::string last_name = contacts[i].get_lastname();
            if (last_name.length() > 10)
                last_name = last_name.substr(0,9) + ".";
            
            std::string nickname = contacts[i].get_nickname();
            if (nickname.length() > 10)
                nickname = nickname.substr(0,9) + ".";
            
            std::cout << std::setw(10) << first_name << "|";
            std::cout << std::setw(10) << last_name << "|";
            std::cout << std::setw(10) << nickname << "|\n";
        }
        std::cout << "-------------------------------------------\n";
        
        int desired_index;
        std::cout << "Enter your desired contact's index (0 to 7): " ;
        std::cin >> desired_index;
        if (desired_index >= 0 && desired_index < count)
        {
            std::cout << "First name : "<< contacts[desired_index].get_firstname() << "\n";
            std::cout << "Last name : " << contacts[desired_index].get_lastname() << "\n";
            std::cout << "Nickname :" << contacts[desired_index].get_nickname() << "\n";
            std::cout << "Number :" << contacts[desired_index].get_number() << "\n";
            std::cout << "Darkest secret :" << contacts[desired_index].get_secret() << "\n";
        }
        else 
            std::cout << "Sorry ,there is not any contact with this index !\n";
    }
    
};

int main ()
{
    Phonebook pb;
    std::string s;
    while (1)
    {
    std::string s;
    std::cout << "Select (ADD, SEARCH or EXIT): ";
    std::cin >> s;
    if ( s == "ADD" )
        pb.addContact();
     else if (s == "SEARCH" )
        pb.searchContact();
     else if ( s == "EXIT" )
        break;
    }
    return 0;
}