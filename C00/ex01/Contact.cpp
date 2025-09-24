/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 14:27:13 by tcybak            #+#    #+#             */
/*   Updated: 2025/09/24 17:31:23 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
    _first_name = "";
    _last_name = "";
    _nickname = "";
    _phone_number = "";
    _darkest_secret = "";
}

Contact::~Contact() { }

std::string Contact::getFirstName() { return (this->_first_name); }

void   Contact::setFirstName(std::string value) { this->_first_name = value; }

std::string Contact::getlastName() { return (this->_last_name); }

void   Contact::setlastName(std::string value) { this->_last_name = value; }

std::string Contact::getnickname() { return (this->_nickname); }

void   Contact::setnickname(std::string value) { this->_nickname = value; }

std::string Contact::getnumber() { return (this->_phone_number); }

void   Contact::setnumber(std::string value) { this->_phone_number = value; }

std::string Contact::getsecret() { return (this->_darkest_secret); }

void   Contact::setsecret(std::string value) { this->_darkest_secret = value; }



