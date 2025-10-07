/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 17:53:07 by tcybak            #+#    #+#             */
/*   Updated: 2025/10/07 10:53:35 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main(void)
{
  Zombie *Zom;

  Zom = zombieHorde(5, "Bob");
  for (int i = 0; i < 5; i++) { Zom[i].announce(); }
  delete[] Zom;
}

    // int         number;
    // std::string name;
    // if (ac != 3)
    // {
    //     std::cout << "Need number and name" << std::endl;
    //     return (1);
    // }
    // number