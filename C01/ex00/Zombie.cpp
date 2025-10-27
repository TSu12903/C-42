/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 21:33:27 by tcybak            #+#    #+#             */
/*   Updated: 2025/10/27 16:15:11 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void        Zombie::setName_Zombie(std::string value) { this->_name = value;  }

std::string Zombie::getName_Zombie() { return(this->_name); }

void    Zombie::announce() {    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl; }

Zombie::Zombie() {  }

Zombie::~Zombie() { }