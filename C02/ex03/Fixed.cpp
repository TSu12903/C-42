/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:13:00 by tcybak            #+#    #+#             */
/*   Updated: 2025/10/30 13:30:14 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void    Fixed::setRawBits(int const raw) { this->_fixed_p = raw; }

float   Fixed::toFloat(void) const { return ((float)this->_fixed_p / (float)(1 << _fractional)); }

int		Fixed::toInt(void) const {	return ((int)(this->_fixed_p >> _fractional)); }

int		Fixed::getRawBits(void) const { return ((this->_fixed_p)); }

Fixed::Fixed(): _fixed_p(0) { }

Fixed::Fixed(const int raw) {	_fixed_p = raw << _fractional; }

Fixed::Fixed(const float raw) { this->_fixed_p = roundf(raw * (1 << this->_fractional)); }

Fixed& Fixed::operator=(const Fixed &other)
{
	if (this != &other)
		_fixed_p = other.getRawBits();
	return *this;
}

Fixed  Fixed::operator*(const Fixed& other) const
{
	Fixed result;
    long  tmp;

    tmp = (long)this->_fixed_p * (long)other._fixed_p;
    tmp = tmp >> _fractional;
    result.setRawBits((int)tmp);
    return (result);
}

Fixed  Fixed::operator+(const Fixed& other) const
{
	Fixed result;
	long  tmp;

    tmp = (long)this->_fixed_p + (long)other._fixed_p;
    result.setRawBits((int)tmp);
    return (result);
}

Fixed  Fixed::operator-(const Fixed& other) const
{
	Fixed result;
    long  tmp;

    tmp = (long)this->_fixed_p - (long)other._fixed_p;
    result.setRawBits((int)tmp);
    return (result);
}

Fixed  Fixed::operator/(const Fixed& other) const
{
	Fixed result;
    long  tmp;

    tmp = ((long)this->_fixed_p << _fractional) / (long)other._fixed_p;
    result.setRawBits((int)tmp);
    return (result);
}

bool   Fixed::operator<(const Fixed& other) const { return (this->_fixed_p < other._fixed_p); }

bool   Fixed::operator>(const Fixed& other) const { return (this->getRawBits() > other.getRawBits()); }

bool   Fixed::operator<=(const Fixed& other) const { return (this->_fixed_p <= other._fixed_p); }

bool   Fixed::operator>=(const Fixed& other) const { return (this->_fixed_p >= other._fixed_p); }

bool   Fixed::operator==(const Fixed& other) const { return (this->_fixed_p == other._fixed_p); }

bool   Fixed::operator!=(const Fixed& other) const { return (this->_fixed_p != other._fixed_p); }

Fixed&  Fixed::operator++(){ _fixed_p++; return (*this);}

Fixed&  Fixed::operator--(){ _fixed_p--; return (*this);}

Fixed   Fixed::operator++(int){

    Fixed tmp = *this;
    ++*this;
    return (tmp);
}

Fixed   Fixed::operator--(int){

    Fixed tmp = *this;
    --*this;
    return (tmp);
}

Fixed&  Fixed::min(Fixed& a, Fixed& b)
{
    if (a > b)
        return (b);
    return (a);
}

Fixed&  Fixed::max(Fixed& a, Fixed& b)
{
    if (a < b)
        return (b);
    return (a);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a > b)
        return (b);
    return (a);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a < b)
        return (b);
    return (a);
}

std::ostream& operator<<(std::ostream& os, const Fixed& other)
{
	os << other.toFloat();
	return (os);
}

Fixed::Fixed(const Fixed &other) : _fixed_p(other._fixed_p) {	_fixed_p = other.getRawBits(); }

Fixed::~Fixed() { }
