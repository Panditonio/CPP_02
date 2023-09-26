/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:26:26 by aherbet           #+#    #+#             */
/*   Updated: 2023/06/20 15:26:28 by aherbet          ###   ########.fr       */
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
        static int const    _bits = FIXED_BITS;
    public:
        Fixed( void );
        Fixed( Fixed const &src );
        Fixed&  operator=( Fixed const &copy );
        ~Fixed( void );

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
};

#endif
