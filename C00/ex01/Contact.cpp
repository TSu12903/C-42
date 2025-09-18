/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 14:27:13 by tcybak            #+#    #+#             */
/*   Updated: 2025/09/18 16:51:04 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
    _number_book = 0;
    _first_name = "";
    _last_name = "";
    _nickname = "";
    _phone_number = "";
    _darkest_secret = "";
}

Contact::~Contact()
{
    
}

std::string Contact::getFirstName()
{
    return (this->_first_name);
}

void   Contact::setFirstName(std::string value)
{
    this->_first_name = value;
}