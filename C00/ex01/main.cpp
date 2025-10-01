/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 17:43:39 by tcybak            #+#    #+#             */
/*   Updated: 2025/10/01 14:05:28 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main() {
    PhoneBook phone;
    std::string param;

    while (1)
    {
        param = phone.entry("Enter a command ADD / SEARCH or EXIT");
        if (param == "")
            break ;
        if (param == "ADD")
            phone.add();
        else if (param == "EXIT")
            break;
        else if (param == "SEARCH")
            phone.search();
    }
}