/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 10:30:54 by tcybak            #+#    #+#             */
/*   Updated: 2025/10/09 14:41:35 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl        hal;
    std::string level;
    if (ac != 2)
    {
        std::cout << "Error need only one argument" << std::endl;
        return (1);
    }
    level = av[1];
    hal.complain(level);
}