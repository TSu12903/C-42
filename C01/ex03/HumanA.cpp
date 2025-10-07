/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 11:18:48 by tcybak            #+#    #+#             */
/*   Updated: 2025/10/07 14:36:41 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void    HumanA::attack()
{
    std::cout   << this->_name
                << " attacks with their "
                << this->_weapon.getType()
                << std::endl;
}

HumanA::HumanA(std::string name, Weapon& club): _name(name), _weapon(club) {   };

HumanA::~HumanA() {   };