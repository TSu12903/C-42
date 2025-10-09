/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 10:31:09 by tcybak            #+#    #+#             */
/*   Updated: 2025/10/09 13:19:58 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::complain(std::string level)
{
    (void)level;
    info();
}

Harl::Harl() {  };

Harl::~Harl() { };

void Harl::debug(void)
{
    std::string str = "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!";
    std::string *debug_str =  &str;
    std::cout << *debug_str;
}

void Harl::info(void)
{
    std::string str = "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!";
    std::string *info_str =  &str;
    std::cout << *info_str;
};
void Harl::warning(void)
{
    std::string str = "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month.";
    std::string *warning_str =  &str;
    std::cout << *warning_str;
};
void Harl::error(void)
{
    std::string str = "This is unacceptable! I want to speak to the manager now.";
    std::string *error_str =  &str;
    std::cout << *error_str;
};