/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:28:58 by aherbet           #+#    #+#             */
/*   Updated: 2023/06/20 15:28:59 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <cstdlib>
#include <string>

/* static void     intro(void) {
    std::cout << "Welcome to Point-Z ! Testing whether";
    std::cout << " your point is in my triangle…" << std::endl;
    std::cout << "Please select one of the following : ";
    std::cout << "PLAY or EXIT" <<std::endl;
    std::cout << std::endl;
 }

Point    getValues( void ) {
    Point   point;
    float   x;
    float   y;
    Fixed   X_value = 0;
    Fixed   Y_value = 0;

    std::cout << std::endl;
    std::cout << "Enter point coordinates using the syntax \"x,y\" : ";
    std::cin >> x;
    if (std::cin.good()) {
        X_value = x;
        char d = std::cin.get();
        if (d == ',') {
            std::cin >> y;
            if(std::cin.good()) {
                Y_value = y;
                point.assign(X_value, Y_value);
                return (point);
            }
            else {
                std::cout << "Input error" << std::endl;
                std::cin.clear();
            }
        }
        else {
            std::cin.putback(d);
            std::cout << "Input error" << std::endl;
        }
    }
    else {
        std::cout << "Input error" << std::endl;
        std::cin.clear();
    }
    point.assign(0, 0);
    return (point);
}

int     main(void) {
    intro();
    Point       point;
    std::string input;
 
    while(42) {
        while (!std::cin.eof()) {
            std::cout << "What do you choose ?" << std::endl;
            std::getline(std::cin, input, '\n');
                if (input.compare("PLAY") == 0) {
                    point = getValues();
                    if (bsp( Point(0, 0), Point(20, 0), Point(10, 30), point) == true ) {
                        std::cout << "Point is in the triangle" << std::endl;
                    } 
                    else
                        std::cout << "Point is not in the triangle" << std::endl;
                }
                else if (input.compare("EXIT") == 0)
                    break;
                else if (input.empty() == true)
                    continue;
                else {
                    std::cout << std::endl;
                    std::cout << "Invalid input…" << std::endl;
                    std::cout << "Please use PLAY or EXIT" << std::endl;
                    std::cout << std::endl;
                }
        }
        return (EXIT_FAILURE);
    }
    return (EXIT_SUCCESS);
} */


/* int main ( void ) {
    Point   point;

    std::cout << "Triangle coordinates are ; A(0,0), B(10,30) and C (20,0)" << std::endl;
    
    std::cout << "Evaluating point #1 : coordinates 30,15" << std::endl;
    Point point1(30, 15);
    if ( bsp( Point(0, 0), Point(10, 30), Point(20, 0), point1 ) == true ) {
        std::cout << "Point is in the triangle" << std::endl;
    } 
    else {
        std::cout << "Point is not in the triangle" << std::endl;
    }
    std::cout << "Evaluating point #2 : coordinates 10,15" << std::endl;
    
    Point point2(10, 15);
    if ( bsp( Point(0, 0), Point(10, 30), Point(20, 0), point2 ) == true ) {
        std::cout << "Point is in the triangle" << std::endl;
    } 
    else {
        std::cout << "Point is not in the triangle" << std::endl;
    }
    return 0;
} */

/* int main ( void ) {
    std::cout << "Triangle coordinates are : A(0,0), B(10,30) and C (20,0)" << std::endl;
    std::cout << "Evaluating point #1 : coordinates 30,15" << std::endl;
    if ( bsp( Point(0, 0), Point(10, 30), Point(20, 0), Point(30, 15) ) == true ) {
        std::cout << "Point is in the triangle" << std::endl;
    } else {
    std::cout << "Point is not in the triangle" << std::endl;
    }
    std::cout << "Evaluating point #2 : coordinates 10,15" << std::endl;
    if ( bsp( Point(0, 0), Point(10, 30), Point(20, 0), Point(10, 15) ) == true ) {
        std::cout << "Point is in the triangle" << std::endl;
    } else {
        std::cout << "Point is not in the triangle" << std::endl;
    }
    std::cout << "Evaluating point #3 : coordinates 10,30" << std::endl;
    if ( bsp( Point(0, 0), Point(10, 30), Point(20, 0), Point(10, 30) ) == true ) {
        std::cout << "Point is in the triangle" << std::endl;
    } else {
    std::cout << "Point is not in the triangle" << std::endl;
    }
    std::cout << "Evaluating point #4 : coordinates 1,1" << std::endl;
    if ( bsp( Point(0, 0), Point(10, 30), Point(20, 0), Point(1, 1) ) == true ) {
        std::cout << "Point is in the triangle" << std::endl;
    } else {
        std::cout << "Point is not in the triangle" << std::endl;
    }
    std::cout << "Evaluating point #5 : coordinates 5.12,0" << std::endl;
    if ( bsp( Point(0, 0), Point(10, 30), Point(20, 0), Point(1, 1) ) == true ) {
        std::cout << "Point is in the triangle" << std::endl;
    } else {
        std::cout << "Point is not in the triangle" << std::endl;
    }
        std::cout << "Evaluating point #6 : coordinates 50.255,-50" << std::endl;
    if ( bsp( Point(0, 0), Point(10, 30), Point(20, 0), Point(1, 1) ) == true ) {
        std::cout << "Point is in the triangle" << std::endl;
    } else {
        std::cout << "Point is not in the triangle" << std::endl;
    }
    return 0;
}
 */
void	checkPos(Point const a, Point const b, Point const c, Point const p) {

	if (bsp(a, b, c, p) == true)
		std::cout << "Point ( " << p.getX() << ", " << p.getY() << " ) is INSIDE triangle ABC" << std::endl;
	else
		std::cout << "Point ( " << p.getX() << ", " << p.getY() << " ) is OUTSIDE triangle ABC" << std::endl;

}

int	main(void) {

	Point a;
	Point b(4.2, 0);
	Point c(2.987, -3.8);	

	std::cout << "Triangle ABC created with these coordinates :" << std::endl;
	std::cout << "A : ( " << a.getX() << ", " << a.getY() << " )" << std::endl;
	std::cout << "B : ( " << b.getX() << ", " << b.getY() << " )" << std::endl;
	std::cout << "C : ( " << c.getX() << ", " << c.getY() << " )" << std::endl << std::endl;

	Point p1(2.1, -1.82);
	Point p2(0.1, -0.1);
	Point p3(3, -1);

	Point p4 = b;
	Point p5(2.23456, 0);
	Point p6(5.12, -50);

	checkPos(a, b, c, p1);
	checkPos(a, b, c, p2);
	checkPos(a, b, c, p3);
	checkPos(a, b, c, p4);
	checkPos(a, b, c, p5);
	checkPos(a, b, c, p6);

	return 0;
}

