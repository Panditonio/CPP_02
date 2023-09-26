/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:27:43 by aherbet           #+#    #+#             */
/*   Updated: 2023/06/20 15:27:45 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const   Fixed::_bits = FIXED_BITS;

Fixed::Fixed( void ): _fNum(0) {
    return;
}

Fixed::Fixed( int const num ): _fNum(num << this->_bits) {
    return;
}

Fixed::Fixed( float const flt ): _fNum(roundf(flt * (1 << this->_bits))) {
    return;
}

Fixed::Fixed( Fixed const &src ) {
    *this = src;
    return;
}

Fixed&  Fixed::operator=( Fixed const &copy ) {
    if (this != &copy)
        this->_fNum = copy.getRawBits();
    return (*this);
}

Fixed::~Fixed( void ) {
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

std::ostream   &operator<<(std::ostream &os, Fixed const &op) {
    os << op.toFloat();
    return (os);
}

bool    Fixed::operator>( Fixed const &rhs ) const {
    return (this->getRawBits() > rhs.getRawBits());
}

bool    Fixed::operator<( Fixed const &rhs ) const {
    return (this->getRawBits() < rhs.getRawBits());
}

bool    Fixed::operator>=( Fixed const &rhs ) const {
    return (this->getRawBits() >= rhs.getRawBits());
}

bool    Fixed::operator<=( Fixed const &rhs ) const {
    return (this->getRawBits() <= rhs.getRawBits());
}

bool    Fixed::operator==( Fixed const &rhs ) const {
    return (this->getRawBits() == rhs.getRawBits());
}

bool    Fixed::operator!=( Fixed const &rhs ) const {
    return (this->getRawBits() != rhs.getRawBits());
}

Fixed   Fixed::operator+( Fixed const &rhs ) const {
    return (Fixed( this->toFloat() + rhs.toFloat() ));
}

Fixed   Fixed::operator-( Fixed const &rhs ) const {
    return (Fixed( this->toFloat() - rhs.toFloat() ));
}

Fixed   Fixed::operator*( Fixed const &rhs ) const {
    return (Fixed( this->toFloat() * rhs.toFloat() ));
}

Fixed   Fixed::operator/( Fixed const &rhs ) const {
    return (Fixed( this->toFloat() / rhs.toFloat() ));
}

Fixed&   Fixed::operator++( void ) {
    _fNum++;
    return (*this);
}

Fixed   Fixed::operator++( int value ) {
    Fixed tmp( *this );

    if (value != 0)
        _fNum += value;
    else
        _fNum++;
    return (tmp);
}

//Fixed   Fixed::operator++( int ) {
//    Fixed tmp( *this );
//    ++*this;
//    return (tmp);
//}

Fixed& Fixed::operator--( void ) {
    _fNum--;
    return (*this);
}

Fixed Fixed::operator--( int value ) {
    Fixed tmp( *this );

    if (value != 0)
        _fNum -= value;
    else
        _fNum--;
    return (tmp);
}

//Fixed Fixed::operator--( int ) {
//    Fixed tmp( *this );
//    --*this;
//    return (tmp);
//}

Fixed& Fixed::min( Fixed &a, Fixed &b ) {
    return (a.toFloat() < b.toFloat() ? a : b);
}

const Fixed& Fixed::min( const Fixed &a, const Fixed &b ) {
    return (a.toFloat() < b.toFloat() ? a : b);
}

Fixed& Fixed::max( Fixed &a, Fixed &b ) {
    return (a.toFloat() > b.toFloat() ? a : b);
}

const Fixed& Fixed::max( const Fixed &a, const Fixed &b ) {
    return (a.toFloat() > b.toFloat() ? a : b);
}
