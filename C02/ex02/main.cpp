/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:12:40 by tcybak            #+#    #+#             */
/*   Updated: 2025/10/29 16:46:43 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
    Fixed a;
    Fixed const c(5.05f);
    Fixed const d(2);
    Fixed const b(Fixed(5.05f) * Fixed(2));
    
    if (c < d)
        std::cout << "c < d" << std::endl;
    else
        std::cout << "c >= d" << std::endl;

    if (c > d)
        std::cout << "c > d" << std::endl;
    else
        std::cout << "c <= d" << std::endl;
    std::cout << c + d << "   ++ here" << std::endl;
    std::cout << c - d << "   -- here" << std::endl;
    std::cout << c / d << "   / here" << std::endl;
    std::cout << c * d << "   * here" << std::endl;
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    // std::cout << Fixed::max( a, b ) << std::endl;

}
