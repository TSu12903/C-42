/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timothy <timothy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:12:52 by tcybak            #+#    #+#             */
/*   Updated: 2025/10/24 09:40:43 by timothy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class  Fixed
{
    public:
        Fixed();
        Fixed(const Fixed &other);
        ~ Fixed();
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        Fixed&  operator=(const Fixed& other);
    private:
        int                 _fixed_p;
        static const int    _fractional = 8;
};


#endif