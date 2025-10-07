/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 17:53:31 by tcybak            #+#    #+#             */
/*   Updated: 2025/10/07 10:33:16 by tcybak           ###   ########.fr       */
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
        void        setName_Zombie(std::string value);
        std::string getName_Zombie();
    private:
        std::string  _name;
        
};

#endif