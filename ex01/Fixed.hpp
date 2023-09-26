/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:27:08 by aherbet           #+#    #+#             */
/*   Updated: 2023/06/20 15:27:09 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//************************************************************//
//                        FIXED CLASS                         //
//************************************************************//

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

#define FIXED_BITS 8

class Fixed
{
    private:
        int                 _fNum;
        static int const    _bits;
    public:
        Fixed( void );
        Fixed( int const num );
        Fixed( float const flt );
        Fixed( Fixed const &src );
        Fixed&  operator=( Fixed const &copy );
        ~Fixed( void );

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        float   toFloat( void ) const;
        int     toInt( void ) const;
};

std::ostream   &operator<<(std::ostream &os, Fixed const &input);

#endif
