/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:28:50 by aherbet           #+#    #+#             */
/*   Updated: 2023/06/20 15:28:52 by aherbet          ###   ########.fr       */
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
#define NULL __null

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

        bool    operator>( Fixed const &rhs ) const;
        bool    operator<( Fixed const &rhs ) const;
        bool    operator>=( Fixed const &rhs ) const;
        bool    operator<=( Fixed const &rhs ) const;
        bool    operator==( Fixed const &rhs ) const;
        bool    operator!=( Fixed const &rhs ) const;

        Fixed   operator+( Fixed const &rhs ) const;
        Fixed   operator-( Fixed const &rhs ) const;
        Fixed   operator*( Fixed const &rhs ) const;
        Fixed   operator/( Fixed const &rhs ) const;

        Fixed&  operator++( void ); /*prefix*/
        Fixed   operator++( int value ); /*postfix*/
//        Fixed   operator++( int ); /*postfix*/
        Fixed&  operator--( void ); /*prefix*/
        Fixed   operator--( int value ); /*postfix*/
//        Fixed   operator--( int value ); /*postfix*/

        static Fixed& min( Fixed &a, Fixed &b );
        static const Fixed& min( Fixed const &a, Fixed const &b );
        static Fixed& max( Fixed &a, Fixed &b );
        static const Fixed& max( Fixed const &a, Fixed const &b );
};

std::ostream   &operator<<(std::ostream &os, Fixed const &op);

#endif
