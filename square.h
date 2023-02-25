#ifndef SQUARE_H
#define SQUARE_H

#include "rectangle.h"

class Square : public Rectangle {
private:
public:
	Square(double len, std::string name, std::string color);
	void display();
};
#endif