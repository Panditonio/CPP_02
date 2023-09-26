/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:26:59 by aherbet           #+#    #+#             */
/*   Updated: 2023/06/20 15:27:02 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const   Fixed::_bits = FIXED_BITS;

Fixed::Fixed( void ): _fNum(0) {
    std::cout << "Default constructor called" << std::endl;
    return;
}

Fixed::Fixed( int const num ): _fNum(num << this->_bits) {
    std::cout << "Int constructor called" << std::endl;
    return;
}

Fixed::Fixed( float const flt ): _fNum(roundf(flt * (1 << this->_bits))) {
    std::cout << "Float constructor called" << std::endl;
    return;
}

Fixed::Fixed( Fixed const &src ) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Fixed&  Fixed::operator=( Fixed const &copy ) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &copy)
        this->_fNum = copy.getRawBits();
    return (*this);
}

Fixed::~Fixed( void ) {
    std::cout << "Destructor called" << std::endl;
}

int     Fixed::getRawBits( void ) const {
    return (this->_fNum);
}

void    Fixed::setRawBits( int const raw ) {
    this->_fNum = raw;
}

float   Fixed::toFloat( void ) const {
    return (static_cast<float>(this->_fNum) / static_cast<float>(1 << this->_bits));
}

int     Fixed::toInt( void ) const {
    return (this->_fNum >> this->_bits);
}

std::ostream   &operator<<(std::ostream &os, Fixed const &input) {
    os << input.toFloat();
    return (os);
}

// int   ft_powerize(int base, int exp) {
//     int   result = 1;

//     for (int i = 0; i < exp; i++)
//         result *= base;
//     return(result);
// }
