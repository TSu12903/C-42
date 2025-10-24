/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcybak <tcybak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:12:52 by tcybak            #+#    #+#             */
/*   Updated: 2025/10/24 14:14:09 by tcybak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <math.h>

class  Fixed
{
    public:
        Fixed();
        Fixed(const int raw);
        Fixed(const float raw);
        Fixed(const Fixed &other);
        ~Fixed();
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        Fixed&  operator=(const Fixed& other);
        float   toFloat(void) const;
        int     toInt( void ) const;
    private:
        int                 _fixed_p;
        static const int    _fractional = 8;
};

        std::ostream& operator<<(std::ostream& os, const Fixed& other);
#endif

/*
Un constructeur qui prend un entier constant comme paramètre.
Il le convertit à la valeur de point fixe correspondante. La valeur des bits fractionnaires
devrait être initialisé à 8, comme dans l’exercice 00.
• Un constructeur qui prend un nombre à virgule flottante constant comme paramètre.
Il le convertit à la valeur de point fixe correspondante. La valeur des bits fractionnaires
devrait être initialisé à 8, comme dans l’exercice 00.
• Une fonction membre float à const Float( void ) ;
qui convertit la valeur à virgule fixe en une valeur à virgule flottante.
• Une fonction membre int toInt( void ) const;
qui convertit la valeur à virgule fixe en une valeur entière.
Et ajouter la fonction suivante aux fichiers de classe Fixed :
• Une surcharge de l’opérateur d’insertion (« ) qui insère une représentation en virgule flottante
du nombre à virgule fixe dans l’objet de flux de sortie passé en paramètre.
*/