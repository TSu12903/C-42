/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 14:06:19 by tcybak            #+#    #+#             */
/*   Updated: 2025/10/01 21:18:10 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <sstream>
#include "Contact.hpp"

class   PhoneBook
{
    public:
        PhoneBook();
        ~PhoneBook();
        void    add();
        void    search();
        void    print_info(int index, int i);
        std::string entry(std::string message);
    private:
        Contact _tab[8];
        int     _num;
};

void    print_header_tab();

#endif
