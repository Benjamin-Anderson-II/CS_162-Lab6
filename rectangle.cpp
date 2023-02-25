#include "rectangle.h"

#include <iostream>
#include <string>

using namespace std;

Rectangle::Rectangle(float w, float h, string name, string color)
	: width{w}
	, height{h}
	, Shape {name, color}
{
	areA = area();
}

float Rectangle::getWidth(){
	return width;
}

float Rectangle::area(){
	return areA;
}

void Rectangle::display(){
	cout << this->getName() << " is a(n) " << this->getColor() << " rectangle, with side lengths " << width << " and " << height << " and area of " << this->area() << endl;
}