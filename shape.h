#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape {
private:
	std::string name{};
	std::string color{};
	int areA{};
public:
	Shape();
	Shape(std::string, std::string);
	virtual float area() = 0;
	std::string getName();
	std::string getColor();
	virtual void display();
	friend bool operator> (const Shape& s1, const Shape& s2);
	friend bool operator< (const Shape& s1, const Shape& s2);
};

#endif