#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

#define PI 3.1415926

class Circle : public Shape {
private:
	float radius{};
public:
	float area{};
	Circle(float r, std::string name, std::string color);
	float area();
	void display();
};

#endif