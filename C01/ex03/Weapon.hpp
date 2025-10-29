/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 11:21:14 by tcybak            #+#    #+#             */
/*   Updated: 2025/10/29 16:28:17 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class   Weapon
{
    public:
        Weapon(std::string name_weapon);
        ~Weapon();
        const std::string&     getType();
        void            setType(std::string value);
    private:
        std::string _type;

};

#endif