/*
 * =====================================================================================
 *
 *       Filename:  multiLevelInheritance.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/16/2018 23:29:59
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Humberto Esparza (Devlious), humberto.dev96@gmail.com
 *        Company:  Blinkers
 *
 * =====================================================================================
 */

#include <stdio.h>

class Triangle {
	public:
		void triangle() {
			printf("I am a triangle\n");
		}
};

class Isosceles : public Triangle {
	public:
		void isosceles() {
			printf("I am an isosceles triangle\n");
		}
};

class Equilateral : public Isosceles {
	public:
		void equilateral() {
			printf("I am an equilateral triangle\n");
		}
};


int main() {

	Equilateral eqr;

	eqr.equilateral();
	eqr.isosceles();
	eqr.triangle();

	return 0;
}
