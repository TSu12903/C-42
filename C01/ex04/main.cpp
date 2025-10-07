/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:52:27 by tcybak            #+#    #+#             */
/*   Updated: 2025/10/07 16:42:11 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{

    if (ac != 4)
    {
        std::cout   << "Need 1 file and 2 arguments"
                    << std::endl;
        return (0);
    }
    std::ifstream file(av[1]);
    if (!file) { std::ofstream file(av[1]); }
    
    
}