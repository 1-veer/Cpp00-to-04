/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 20:44:56 by abougati          #+#    #+#             */
/*   Updated: 2025/11/06 20:47:40 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::set_infos (std::string first_name ,std::string last_name 
                ,std::string nickname, std::string phone_number ,std::string darkest_secret)
{
    this->first_name = first_name;
    this->last_name = last_name;
    this->nickname = nickname;
    this->phone_number = phone_number;
    this->darkest_secret = darkest_secret; 
}
std::string Contact::get_firstname()
{
    return (first_name);
}
std::string Contact::get_lastname()
{
    return (last_name);
}
std::string Contact::get_nickname()
{
    return (nickname);
}
std::string Contact::get_number()
{
    return (phone_number);
}
std::string Contact::get_secret()
{
    return (darkest_secret);
 }
