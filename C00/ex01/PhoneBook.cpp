/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:01:45 by abougati          #+#    #+#             */
/*   Updated: 2025/11/06 21:33:19 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook ()
{
    index = 0; 
    count = 0;
}
    
void PhoneBook::addContact()
{
    std::string firstname, lastname, nickname, number, secret;
    std::cout << "Enter first name : " ;
    std::getline(std::cin, firstname);
    if (invalid_field(firstname))
        return ;

    std::cout << "Enter last name : " ;
    std::getline(std::cin, lastname);
    if (invalid_field(lastname))
        return ;
        
    std::cout << "Enter nickname : " ;
    std::getline(std::cin, nickname);
    if (invalid_field(nickname))
        return ;

    std::cout << "Enter phone number : " ;
    std::getline(std::cin, number);
    if (invalid_field(number))
        return ;
            
    std::cout << "Enter darkest secret : " ;
    std::getline(std::cin, secret);
    if (invalid_field(secret))
        return ;

    if (index < 8)
        contacts[index].set_infos(firstname, lastname, nickname, number, secret);
    else 
        contacts[7].set_infos(firstname, lastname, nickname, number, secret);
    index = (index + 1) % 8;
    if (count < 8)
        count ++;
}
    
void PhoneBook::searchContact()
{
    std::cout << "-------------------------------------------\n";
    std::cout << std::right; 
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
        
    std::string desired_index_str;
    int desired_index;
    std::cout << "Enter the contact's index (0 to "<< count -1 <<"): " ;
    std::getline(std::cin, desired_index_str);

    std::stringstream ss(desired_index_str);
     if (!(ss >> desired_index))
     {
        desired_index = 99; 
     }

    if (desired_index >= 0 && desired_index < count )
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

