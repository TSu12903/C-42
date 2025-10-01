/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 10:24:50 by tcybak            #+#    #+#             */
/*   Updated: 2025/10/01 14:44:17 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

void	Account::_displayTimestamp(void)
{
    std::time_t time;
    std::tm*    t_now;
    
    time = std::time(NULL);
    t_now = std::localtime(&time);
    std::cout 
        << "["       
        << std::setw(4) << t_now->tm_year + 1900
        << std::setfill('0') << std::setw(2) << t_now->tm_mon + 1
        << std::setfill('0') << std::setw(2) << t_now->tm_mday 
        << "_"
        << std::setfill('0') << std::setw(2) << t_now->tm_hour
        << std::setfill('0') << std::setw(2) << t_now->tm_min
        << std::setfill('0') << std::setw(2) << t_now->tm_sec 
        << "] ";
}

void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts()
              << ";total:" << getTotalAmount()
              << ";deposits:" << getNbDeposits()
              << ";withdrawals:" << getNbWithdrawals()
              << std::endl;
}
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::displayStatus(void) const 
{
    _displayTimestamp();
    
    std::cout   << "index:" << this->_accountIndex
                << ";amount:" << checkAmount()
                << ";deposits:" << this->_nbDeposits
                << ";withdrawals:" << _nbWithdrawals
                << std::endl;
}

int Account::getTotalAmount(void) { return _totalAmount; }
int Account::getNbDeposits(void) { return _totalNbDeposits; }
int Account::getNbWithdrawals(void) { return _totalNbWithdrawals; }
int Account::checkAmount(void) const { return this->_amount; }
int Account::getNbAccounts(void){   return _nbAccounts; }

void Account::makeDeposit(int deposit)
{
    this->_nbDeposits++;
    _totalNbDeposits++;
    _displayTimestamp();
    std::cout   << "index:" << this->_accountIndex
                << ";p_amount:" << this->_amount
                << ";deposit:" << deposit;
    this->_amount = this->_amount + deposit;
    _totalAmount += deposit;
    std::cout   << ";amount:" << this->_amount
                << ";nb_deposits:" << this->_nbDeposits
                << std::endl;
}
bool Account::makeWithdrawal(int withdrawal) 
{
    _displayTimestamp();
    std::cout   << "index:" << this->_accountIndex
                << ";p_amount:" << this->_amount;
    if (withdrawal > this->_amount)
    {
        std::cout   << ";withdrawal:refused"
                    << std::endl;
        return (false);
    }
    this->_nbWithdrawals++;
    _totalNbWithdrawals++;;
    this->_amount = this->_amount - withdrawal;
    _totalAmount -= withdrawal;
    std::cout   << ";withdrawal:" << withdrawal
                << ";amount:" << this->_amount
                << ";nb_withdrawals:" << _nbWithdrawals
                << std::endl;
    return (true);
 }

Account::Account(int initial_deposit)
{
    this->_accountIndex = _nbAccounts;
    this->_amount = initial_deposit;
    this->_nbWithdrawals = 0;
    _nbAccounts++;
    _totalAmount += initial_deposit;

    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex
              << ";amount:" << this->_amount
              << ";created" << std::endl;
}

Account::~Account()
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex
              << ";amount:" << this->_amount
              << ";closed" << std::endl;  
}

