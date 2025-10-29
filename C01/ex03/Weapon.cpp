/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 11:18:30 by tcybak            #+#    #+#             */
/*   Updated: 2025/10/29 16:28:35 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "Weapon.hpp"

const std::string&     Weapon::getType(){ return(this->_type); }

void            Weapon::setType(std::string value){ this->_type = value; }

Weapon::Weapon(std::string name_weapon) { _type = name_weapon; };

Weapon::~Weapon() { };
