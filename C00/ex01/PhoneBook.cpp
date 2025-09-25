/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 10:29:04 by tcybak            #+#    #+#             */
/*   Updated: 2025/09/25 22:06:59 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    print_header_tab()
{ 
    std::cout << "|" << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << "|" << std::endl;
    
    std::cout << "|----------|----------|----------|----------|" << std::endl;
}

std::string    PhoneBook::entry(std::string message) 
{
    std::string value;
    while (1) 
    {
        std::cout << message << std::endl;
        std::getline(std::cin, value);
        if (value.size() != 0) return (value); 
        if (!std::cin)
            return ("");
    }
}

void    PhoneBook::add()
{
    int i;
    std::string name;
    std::string number;
    std::string secret;

    i = (PhoneBook::_num % 8);
    PhoneBook::_num++;
    this->_tab[i].setFirstName(entry("Enter the First Name"));
    PhoneBook::_tab[i].setlastName(entry("Enter the Last Name"));
    this->_tab[i].setnickname(entry("Enter the Nickname"));
    PhoneBook::_tab[i].setnumber(entry("Enter the Phone Number"));
    this->_tab[i].setsecret(entry("Enter the Darkest Secret"));
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
    std::string input;

    print_header_tab();
    for (int i = 0; i < 8; i++)
        this->print_info(index, i);
    input = entry("Select Index you want");
    for (int i = 0; input[i]; i++)
    {
        if (isdigit(input[i]))
            continue ;
        else
        {
            std::cout << "Invalid input \nPlease enter a valide number" << std::endl;
            return ;
        }
    }
        index = atoi((input).c_str());
        if (!(index < 8 && index >= 0))
        {
            std::cout << "Invalid input \nPlease enter a valide number" << std::endl;
            return ;
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
        param = entry("Enter a command ADD / SEARCH or EXIT");
        if (param == "")
            break ;
        if (param == "ADD")
            add();
        else if (param == "EXIT")
            break;
        else if (param == "SEARCH")
            search();
    }
}

PhoneBook::~PhoneBook(){   }    