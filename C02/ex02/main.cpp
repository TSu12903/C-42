/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:12:40 by tcybak            #+#    #+#             */
/*   Updated: 2025/10/28 18:21:38 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
    Fixed a;
    Fixed const c(5.05f);
    Fixed const d(2);
    Fixed const b(Fixed(5.05f) * Fixed(2));
    
    std::cout << c + d << "   ++ here" << std::endl;
    std::cout << c - d << "   -- here" << std::endl;
    std::cout << c / d << "   / here" << std::endl;
    std::cout << c * d << "   * here" << std::endl;
    std::cout << a << std::endl;
    // std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    // std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    // std::cout << Fixed::max( a, b ) << std::endl;

}
