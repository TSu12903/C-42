/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 17:53:40 by tcybak            #+#    #+#             */
/*   Updated: 2025/10/29 16:36:26 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void        Zombie::setNameZombie(std::string value) { this->_name = value;  }

std::string Zombie::getNameZombie(){ return(this->_name); }

void    Zombie::announce() {    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl; }

Zombie::Zombie() {  }

Zombie::~Zombie() { }