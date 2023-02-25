#include "circle.h"

#include <iostream>

using namespace std;

Circle::Circle(float r, string name, string color)
	: radius{r}
	, Shape{name, color}
{
	areA = area{};
}

float Circle::area(){
	return areA;
}

void Circle::display(){
	cout << this->getName() << " is a(n) " << this->getColor() << " circle, with a radius of " << radius << " and an area of " << this->area() << endl;
}