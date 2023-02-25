#include "shape.h"

#include <iostream>
using namespace std;


Shape::Shape(){
	name = "";
	color = "";
}

Shape::Shape(string n = "", string c = "") 
	: name{n}
	, color{c} 
{}

string Shape::getName(){
	return name;
}

string Shape::getColor(){
	return color;
}

void Shape::display(){
	cout << name << " is a(n) " << color << " shape\n";
}

bool operator>(const Shape& s1, const Shape& s2){
	return s1.area > s2.area;
}