/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 10:31:20 by tcybak            #+#    #+#             */
/*   Updated: 2025/10/09 14:28:23 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class   Harl
{
    public:
        Harl();
        ~Harl();
        void    complain( std::string level );
    private:
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);
};

#endif