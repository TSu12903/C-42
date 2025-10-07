/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 17:53:49 by tcybak            #+#    #+#             */
/*   Updated: 2025/10/07 10:49:36 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie  *zombie;

    zombie = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        zombie[i].setName_Zombie(name);
    }
    return (zombie);
}
