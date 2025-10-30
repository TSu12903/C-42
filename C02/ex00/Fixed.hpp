/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:12:52 by tcybak            #+#    #+#             */
/*   Updated: 2025/10/30 13:27:49 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class  Fixed
{
    public:
        Fixed();
        Fixed(const Fixed &other);
        ~Fixed();
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        Fixed&  operator=(const Fixed& other);
    private:
        int                 _fixed_p;
        static const int    _fractional = 8;
};

#endif