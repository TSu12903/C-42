/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 21:33:17 by tcybak            #+#    #+#             */
/*   Updated: 2025/10/06 17:48:47 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*     newZombie(std::string name);
void        randomChump(std::string name);

int main()
{
    Zombie *zombie;

    randomChump("Bob");
    zombie = newZombie("Carl");
    zombie->announce();
    delete(zombie);
}