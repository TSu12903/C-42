/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 10:29:04 by tcybak            #+#    #+#             */
/*   Updated: 2025/09/18 17:05:13 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    PhoneBook::add()
{
    std::string name;
    std::cout << "Enter the First Name" << std::endl;
    std::cin >> name;
    this->_tab[0].setFirstName(name);
    std::cout << this->_tab[0].getFirstName() << std::endl;
}

PhoneBook::PhoneBook()
{
    std::string param;
    std::cout << "Enter a command ADD / SEARCH or EXIT" << std::endl;
    while (1)
    {
        std::cin >> param;
        if (param == "ADD")
            add();
        else if (param == "EXIT")
        else
            std::cout << "Connait pas" << std::endl;
    }
}

PhoneBook::~PhoneBook()
{
    
}