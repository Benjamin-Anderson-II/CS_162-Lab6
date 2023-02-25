#include "square.h"

#include <iostream>

using namespace std;

Square::Square(double len, string name, string color)
	: Rectangle{(float)len, (float)len, name, color}
{}

void Square::display(){
	cout << this->getName() << " is a(n) " << this->getColor() << " square, with a side length of " << this->getWidth() << " and an area of " << this->area() << endl;
}