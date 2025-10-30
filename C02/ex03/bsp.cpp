/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 13:22:42 by tcybak            #+#    #+#             */
/*   Updated: 2025/10/30 18:04:38 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed   Point::vect(Point const a, Point const b, Point const point)
{
    Fixed result;

    result = (a._x - point._x)*(b._y - point._y)
            - (a._y - point._y)*(b._x - point._x);
    return (result);
}

bool Point::bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed   S1;
    Fixed   S2;
    Fixed   S3;

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