/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 20:45:09 by abougati          #+#    #+#             */
/*   Updated: 2025/11/06 20:46:38 by abougati         ###   ########.fr       */
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
                ,std::string nickname, std::string phone_number ,std::string darkest_secret);
    std::string get_firstname();
    std::string get_lastname(); 
    std::string get_nickname();  
    std::string get_number();
    std::string get_secret();
   
};