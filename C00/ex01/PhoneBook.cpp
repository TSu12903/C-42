/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 10:29:04 by tcybak            #+#    #+#             */
/*   Updated: 2025/09/25 10:20:40 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string message(std::string str)
{
    std::string name;
    std::cout << str << std::endl;
    std::cin >> name;
    return (name);
}

void    print_header_tab()
{ 
    std::cout << "|" << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << "|" << std::endl;
    
    std::cout << "|----------|----------|----------|----------|" << std::endl;
}

void    PhoneBook::add()
{
    int i;
    std::string name;
    std::string number;
    std::string secret;

    i = (PhoneBook::_num % 8);
    PhoneBook::_num++;
    name = message("Enter the First Name");
    this->_tab[i].setFirstName(name);
    name = message("Enter the Last Name");
    PhoneBook::_tab[i].setlastName(name);
    name = message("Enter the Nickname");
    this->_tab[i].setnickname(name);
    number = message("Enter the Phone Number");
    PhoneBook::_tab[i].setnumber(number);
    secret = message("Enter the Darkest Secret");
    this->_tab[i].setsecret(secret);
    
    
}

void    PhoneBook::print_info(int index, int i)
{
    std::string first_name;
    std::string last_name;
    std::string nickname;
    index = i;
    first_name = this->_tab[i].getFirstName();
    if (first_name.length() > 10)
        first_name = first_name.substr(0, 9) + ".";
    last_name = PhoneBook::_tab[i].getlastName();
    if (last_name.length() > 10)
        last_name = last_name.substr(0, 9) + ".";
    nickname = this->_tab[i].getnickname();
    if (nickname.length() > 10)
        nickname = nickname.substr(0, 9) + ".";
    std::cout << "|" << std::setw(10) << i << "|"
                << std::setw(10) << first_name << "|"
                << std::setw(10) << last_name << "|"
                << std::setw(10) << nickname << "|" << std::endl;
}

void    PhoneBook::search()
{
    int index = 0;

    print_header_tab();
    for (int i = 0; i < 8; i++)
        this->print_info(index, i);
    std::cout << "Select Index you want" << std::endl;
    std::cin >> index;
    if (std::cin.fail() || !(index < 8 && index >= 0))
    {
        std::cout << "Invalid input \nPlease enter a valide number" << std::endl;
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        return;
    }
    else
    {
        std::cout << "First Name : " << this->_tab[index].getFirstName() << std::endl;
        std::cout << "Last Name : " << this->_tab[index].getlastName() << std::endl;
        std::cout << "Nickname : " << this->_tab[index].getnickname() << std::endl;
        std::cout << "Phone Number : " << this->_tab[index].getnumber() << std::endl;
        std::cout << "Darkest Secret : " << this->_tab[index].getsecret() << std::endl;
    }
    return ;
}

PhoneBook::PhoneBook()
{
    std::string param;
    PhoneBook::_num = 0;
    while (1)
    {
        std::cout << "Enter a command ADD / SEARCH or EXIT" << std::endl;
        if (!(std::cin >> param))
            break;
        if (param == "ADD")
            add();
        else if (param == "EXIT")
            break;
        else if (param == "SEARCH")
            search();
        else
            std::cout << "Command don't exist" << std::endl;
    }
}

PhoneBook::~PhoneBook(){   }