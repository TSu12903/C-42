/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 10:53:04 by tcybak            #+#    #+#             */
/*   Updated: 2025/10/07 11:14:04 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string brain = "HI THIS IS BRAIN";
    std::string *stringPTR = &brain;
    std::string &stringREF = brain;

    std::cout   << brain
                << " "
                << &brain
                << std::endl
                << *stringPTR
                << " "
                << &stringPTR
                << std::endl
                << stringREF
                << " "
                << &stringREF
                << std::endl;
}