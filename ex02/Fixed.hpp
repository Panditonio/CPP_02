/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:27:50 by aherbet           #+#    #+#             */
/*   Updated: 2023/06/20 15:27:52 by aherbet          ###   ########.fr       */
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
        static const Fixed& min( const Fixed &a, const Fixed &b );
        static Fixed& max( Fixed &a, Fixed &b );
        static const Fixed& max( const Fixed &a, const Fixed &b );
};

std::ostream   &operator<<(std::ostream &os, Fixed const &op);

#endif
