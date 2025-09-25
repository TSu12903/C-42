/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 10:24:50 by tcybak            #+#    #+#             */
/*   Updated: 2025/09/25 23:16:10 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

void	Account::_displayTimestamp(void)
{
    int         year;
    int         month;
    int         day;
    int         hour;
    int         minute;
    int         second;
    std::time_t time;
    std::tm*    t_now;
    
    time = std::time(NULL);
    t_now = std::localtime(&time);
    std::cout 
        << "["       
        << std::setw(4) << t_now->tm_year + 1900
        << std::setw(2) << t_now->tm_mon + 1
        << std::setw(2) << t_now->tm_mday 
        << "_"
        << std::setw(2) << t_now->tm_hour
        << std::setw(2) << t_now->tm_min
        << std::setw(2) << t_now->tm_sec 
        << "] ";
}

void    Account::displayAccountsInfos(void)
{
    for (int i = 0; i < 8; i++)
    {
        _displayTimestamp();
        std
        
    }
    
}

int Account::getNbAccounts(void){   return _nbAccounts; }

Account::Account(int initial_deposit)
{
    
}

Account::~Account(){    }

