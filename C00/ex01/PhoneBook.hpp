/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 14:06:19 by tcybak            #+#    #+#             */
/*   Updated: 2025/09/24 15:58:59 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class   PhoneBook
{
    public:
        PhoneBook();
        void add();
        ~PhoneBook();
        void search();
    private:
        Contact _tab[8];
        int     _num;
};

void    print_header_tab();

#endif
