/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:26:19 by aherbet           #+#    #+#             */
/*   Updated: 2023/06/20 15:26:21 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ): _fNum(0) {
    std::cout << "Default constructor called" << std::endl;
    return;
}

Fixed::Fixed( Fixed const &src ) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Fixed&  Fixed::operator=( Fixed const &copy ) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->_fNum = copy.getRawBits();
    return (*this);
}

Fixed::~Fixed( void ) {
    std::cout << "Destructor called" << std::endl;
}

int     Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fNum);
}

void    Fixed::setRawBits( int const raw ) {
    this->_fNum = raw;
}
