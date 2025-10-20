/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:13:00 by tcybak            #+#    #+#             */
/*   Updated: 2025/10/20 15:27:40 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include " Fixed.hpp"

void    Fixed::setRawBits(int const raw) { this->fixed_point = raw; }

int    Fixed::getRawBits(void) const 
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixed_point);  
}

Fixed::Fixed() 
{
    this->fixed_point = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed:: Fixed(const Fixed &other)
{
    this->fixed_point = other.fixed_point;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::~ Fixed() {  std::cout << "Destructor called" << std::endl;}
 