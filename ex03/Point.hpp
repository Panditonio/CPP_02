/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:30:19 by aherbet           #+#    #+#             */
/*   Updated: 2023/06/20 15:30:23 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//************************************************************//
//                        POINT CLASS                         //
//************************************************************//

#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

#define NULL __null

class Point
{
    private:
        Fixed const _x;
        Fixed const _y;
    public:
        Point( void );
        Point( float const x, float const y );
        Point( Point const &src );
        Point&  operator=( Point const &copy );
//        Point&  operator=( Point &copy );
        ~Point( void );

        Fixed   getX( void ) const ;
        Fixed   getY( void ) const ;
        void    assign( Fixed const x, Fixed const y );
};

bool    bsp( Point const a, Point const b, Point const c, Point const point);

#endif
