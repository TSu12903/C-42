/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 13:22:29 by tcybak            #+#    #+#             */
/*   Updated: 2025/10/30 18:02:04 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(const Fixed& x, const Fixed& y) : _x(x) , _y(y){   }

Point& Point::operator=(const Point& other)
{
    (void)other;
    return (*this);     
}

Point::Point(const Point& other) : _x(other._x), _y(other._y){   }

Point::~Point() {   }