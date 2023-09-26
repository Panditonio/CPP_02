/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:29:18 by aherbet           #+#    #+#             */
/*   Updated: 2023/06/20 15:29:20 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ): _x(0), _y(0) {
    return;
}

Point::Point( float const x, float const y ): _x( x ), _y( y ) {
    return;
}

//Point::Point( Point const &src ) {
//    *this = src;
//    return;
//}

Point::Point( Point const &src ): _x(src.getX()), _y(src.getY()) {
    return;
}

Point&  Point::operator=( Point const &copy ) {
    if (this != &copy) {
        ( Fixed ) this->_x = copy.getX();
        ( Fixed ) this->_y = copy.getY();
    }
    return (*this);
}

//Point&  Point::operator=( Point &copy ) {
//    return (copy);
//}

Point::~Point( void ) {
    return;
}

Fixed   Point::getX( void ) const {
    return (this->_x);
}

Fixed   Point::getY( void ) const {
    return (this->_y);
}

void    Point::assign( Fixed const x, Fixed const y ) {
    ( Fixed ) this->_x = x;
    ( Fixed ) this->_y = y;
    return;
}