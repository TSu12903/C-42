/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 13:22:42 by tcybak            #+#    #+#             */
/*   Updated: 2025/10/30 16:50:49 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float   Point::vect(Point const a, Point const b, Point const point)
{
    float result;

    result = (a._x.toFloat() - point._x.toFloat())*(b._y.toFloat() - point._y.toFloat())
            - (a._y.toFloat() - point._y.toFloat())*(b._x.toFloat() - point._x.toFloat());
    return (result);
}

bool Point::bsp(Point const a, Point const b, Point const c, Point const point)
{
    float   S1;
    float   S2;
    float   S3;

    S1 = vect(a, b, point);
    S2 = vect(b, c, point);
    S3 = vect(c, a, point);
    
    std::cout << S1 << " S1" << std::endl;
    std::cout << S2 << " S2" << std::endl;
    std::cout << S3 << " S3" << std::endl;

    if ((S1 >= 0 && S2 >= 0 && S3 >=0) || (S1 <= 0 && S2 <= 0 && S3 <=0))
        return (true);
    return (false);
}