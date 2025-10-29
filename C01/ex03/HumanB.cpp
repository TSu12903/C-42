/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 11:18:59 by tcybak            #+#    #+#             */
/*   Updated: 2025/10/29 12:50:43 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

#include "HumanB.hpp"

void        HumanB::setWeapon(Weapon& club) { this->_weapon = &club;  }

void    HumanB::attack()
{
    std::cout   << this->_name << " attacks with their " << (this->_weapon == NULL ? "bare hands" : this->_weapon->getType()) << std::endl;
}

HumanB::HumanB(std::string name)
{
    _name = name;
    _weapon = NULL; 
};



HumanB::~HumanB() {   };