/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 13:22:00 by tcybak            #+#    #+#             */
/*   Updated: 2025/10/30 18:18:43 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    public:
        Point(const Fixed& x, const Fixed& y);
        Point(const Point& other);
        Point&  operator=(const Point& other);
        ~Point();
        bool    bsp(Point const a, Point const b, Point const c, Point const point);
        Fixed   vect(Point const a, Point const b, Point const point);
    private:
        Fixed const _x;
        Fixed const _y;
};

#endif
