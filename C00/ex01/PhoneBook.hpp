/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 20:23:05 by abougati          #+#    #+#             */
/*   Updated: 2025/11/06 20:43:37 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <cstring>
#include <sstream>

class PhoneBook{
    private :
        Contact contacts[8];
        int index;
        int count;
    
    public:
    PhoneBook (); 
    void addContact();
    void searchContact();
};

int invalid_field(std::string str);


#endif