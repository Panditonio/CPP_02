/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:28:27 by aherbet           #+#    #+#             */
/*   Updated: 2023/06/20 15:28:31 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

//-------------------------Barycentric coordinates------------------------//

bool    bsp( Point const a, Point const b, Point const c, Point const point ) {
    Fixed   denominator = (((b.getY() - c.getY()) * (a.getX() - c.getX())) + ((c.getX() - b.getX()) * (a.getY() - c.getY())));
    Fixed   alpha = ((((b.getY() - c.getY()) * (point.getX() - c.getX())) + ((c.getX() - b.getX()) * (point.getY() - c.getY())))
                / denominator);
    Fixed   beta = ((((c.getY() - a.getY()) * (point.getX() - c.getX())) + ((a.getX() - c.getX()) * (point.getY() - c.getY())))
                / denominator);
    Fixed   gamma = 1 - alpha.toFloat() - beta.toFloat();

    return (alpha > 0 && beta > 0 && gamma > 0);
}

//------------------------Check sides method (fail)-----------------------//

/* static Fixed    isLeft( Point const a, Point const b, Point const pt ) {
    return (((b.getY() - a.getY()) * (pt.getX() - a.getX())) + (((b.getX() * -1) 
            + a.getX()) * (pt.getY() - a.getY())));
}

bool    bsp( Point const a, Point const b, Point const c, Point const point ) {
    bool    checkS1 = isLeft( a, b, point ) >= 0;
    bool    checkS2 = isLeft( b, c, point ) >= 0;
    bool    checkS3 = isLeft( c, a, point ) >= 0;

    return (checkS1 && checkS2 && checkS3);
} */

//----------------------Calculate triangle areas (fail)--------------------//

/* static Fixed    absolute( Fixed num ) {
    return (num < 0 ? (num * -1) : num);
}

static Fixed    area( Point const a, Point const b, Point const c) {
    return ( ( ( a.getX() * ( b.getY() - c.getY() ) ) +
            ( b.getX() * ( c.getY() - a.getY() ) ) +
            ( c.getX() * ( a.getY() - b.getY() ) ) ) / 2 );
}

bool    bsp( Point const a, Point const b, Point const c, Point const point) {
    Fixed   abcArea = absolute(area( a, b, c ));
    Fixed   pabArea = absolute(area( point, a, b ));
    Fixed   pbcArea = absolute(area( point, b, c ));
    Fixed   pcaArea = absolute(area( point, c, a ));

    return  ( abcArea == pabArea + pbcArea + pcaArea );
} */
