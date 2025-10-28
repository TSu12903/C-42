/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:12:52 by tcybak            #+#    #+#             */
/*   Updated: 2025/10/28 17:56:11 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <math.h>

class  Fixed
{
    public:
        Fixed();
        Fixed(const int raw);
        Fixed(const float raw);
        Fixed(const Fixed &other);
        ~Fixed();
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        Fixed&  operator=(const Fixed& other);
        Fixed   operator*(const Fixed& other) const;
        Fixed   operator/(const Fixed& other) const;
        Fixed   operator-(const Fixed& other) const;
        Fixed   operator+(const Fixed& other) const;
        float   toFloat(void) const;
        int     toInt( void ) const;
    private:
        int                 _fixed_p;
        static const int    _fractional = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed& other);

#endif