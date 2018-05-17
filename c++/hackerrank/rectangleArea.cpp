/*
 * =====================================================================================
 *
 *       Filename:  rectangleArea.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/16/2018 22:49:18
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Humberto Esparza (Devlious), humberto.dev96@gmail.com
 *        Company:  Blinkers
 *
 * =====================================================================================
 */

#include <stdio.h>

class Rectangle {

	int weight;
	int height;

	public:

	virtual void display() {
		printf("%d %d\n", this->weight, this->height);
	}
	void setWeight(int weight) {
		this->weight = weight;
	}
	
	int getWeight() {
		return this->weight;
	}

	void setHeight(int height) {
		this->height = height;
	}

	int getHeight() {
		return this->height;
	}
};

class RectangleArea: public Rectangle {

	public:

	void read_input() {
		int W, H;
		scanf("%d %d", &W, &H);
		Rectangle::setWeight(W);
		Rectangle::setHeight(H);
	}

	void display() {
		printf("%d", Rectangle::getWeight()*Rectangle::getHeight());
	}

};


int main() {

	RectangleArea r_area;

	r_area.read_input();

	r_area.Rectangle::display();

	r_area.display();

	return 0;
}
