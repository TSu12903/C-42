/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 21:33:27 by tcybak            #+#    #+#             */
/*   Updated: 2025/10/03 15:06:00 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce()
{
    std::cout   << this->name << ": BraiiiiiiinnnzzzZ..."
                << std::endl; 
}

Zombie::Zombie() {  }

Zombie::~Zombie() { }