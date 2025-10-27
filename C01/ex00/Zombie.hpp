/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 11:41:22 by tcybak            #+#    #+#             */
/*   Updated: 2025/10/27 15:26:42 by tcybak           ###   ########.fr       */
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
