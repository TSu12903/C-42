/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:13:00 by tcybak            #+#    #+#             */
/*   Updated: 2025/10/24 16:06:16 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void    Fixed::setRawBits(int const raw) { this->_fixed_p = raw; }

float   Fixed::toFloat(void) const { 
	// std::cout << "Copy assignment operator called" << std::endl; 
	return ((float)roundf(this->_fixed_p)); 
}

int Fixed::toInt(void) const {	
	// std::cout << "Copy assignment operator called" << std::endl; 
	return ((int)roundf(this->_fixed_p )); 
}

int    Fixed::getRawBits(void) const 
{
    // std::cout << "getRawBits member function called" << std::endl;
    return (roundf(this->_fixed_p));  
}

Fixed::Fixed(): _fixed_p(0) {	std::cout << "Default constructor called" << std::endl; }

Fixed::Fixed(const int raw) {	(void)raw; std::cout << "Int constructor called" << std::endl; }

Fixed::Fixed(const float raw) { this->_fixed_p = (raw / (1 << this->_fractional)); std::cout << "Float constructor called" << std::endl; }

Fixed& Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assigment operator called" << std::endl;
	if (this != &other)
	{
		_fixed_p = other.getRawBits();
	}
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed& other)
{
	// std::cout << "Copy assigment operator called" << std::endl;
	os << other.toFloat();
	return (os);
}

Fixed::Fixed(const Fixed &other) : _fixed_p(other._fixed_p)
{
    std::cout << "Copy constructor called" << std::endl;
    _fixed_p = other.getRawBits();
}

Fixed::~ Fixed() {  std::cout << "Destructor called" << std::endl;}
 