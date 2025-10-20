/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Fixed.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:12:52 by tcybak            #+#    #+#             */
/*   Updated: 2025/10/20 15:10:53 by tcybak           ###   ########.fr       */
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
    private:
        static const int    fixed;
        int                 fixed_point;
};


#endif