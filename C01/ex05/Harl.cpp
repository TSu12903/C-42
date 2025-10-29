/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 10:31:09 by tcybak            #+#    #+#             */
/*   Updated: 2025/10/29 13:20:54 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::complain(std::string level)
{
    void    (Harl::*tab[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string str_tab[4] = {"DEBUG","INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++)
    {
        if (level == str_tab[i])
        {
            (this->*tab[i])();
            return ;
        }
    }
    std::cout << "This level dont exist" << std::endl;
}

Harl::Harl() {  };

Harl::~Harl() { };

void Harl::debug(void)
{
    std::string str = "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!";
    std::cout << "[ DEBUG ] "<< str << std::endl;
}

void Harl::info(void)
{
    std::string str = "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!";
    std::cout << "[ INFO ] "<< str << std::endl;
};
void Harl::warning(void)
{
    std::string str = "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month.";
    std::cout << "[ WARNING ] "<< str<< std::endl;
};
void Harl::error(void)
{
    std::string str = "This is unacceptable! I want to speak to the manager now.";
    std::cout << "[ ERROR ] "<< str << std::endl;
};
