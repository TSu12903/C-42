/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 11:41:22 by tcybak            #+#    #+#             */
/*   Updated: 2025/10/03 15:04:38 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>


class Zombie
{
    public:
        Zombie();
        ~Zombie();
        void        announce();
        Zombie*     newZombie(std::string name);
        void        randomChump(std::string name);
    private:
        std::string  name;
        
};

#endif
