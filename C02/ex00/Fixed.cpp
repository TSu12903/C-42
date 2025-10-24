/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timothy <timothy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:13:00 by tcybak            #+#    #+#             */
/*   Updated: 2025/10/24 10:06:54 by timothy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void    Fixed::setRawBits(int const raw) { this->_fixed_p = raw; }

int    Fixed::getRawBits(void) const 
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixed_p);  
}

Fixed::Fixed() : _fixed_p(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assigment operator called" << std::endl;
	if (this != &other)
	{
		_fixed_p = other.getRawBits();
	}
	return *this;
}

Fixed:: Fixed(const Fixed &other) : _fixed_p(other._fixed_p)
{
    std::cout << "Copy constructor called" << std::endl;
    _fixed_p = other.getRawBits();
}

Fixed::~ Fixed() {  std::cout << "Destructor called" << std::endl;}
 