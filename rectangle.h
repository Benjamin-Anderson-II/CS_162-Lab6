#include "shape.h"

#ifndef RECTANGLE_H
#define RECTANGLE_H value

class Rectangle : public Shape {
private:
	float width{};
	float height{};
public:
	float areA{};
	Rectangle(float w, float h, std::string name, std::string color);
	float getWidth();
	float area();
	void display();
};

#endif