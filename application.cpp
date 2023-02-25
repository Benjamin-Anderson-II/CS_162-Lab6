#include <iostream>
#include "rectangle.h"
#include "circle.h"
#include "square.h"
using namespace std;

int main(int argc, char const *argv[])
{
	Shape** array_of_shapes = new Shape*[3];
	array_of_shapes[0] = new Rectangle(2.3, 4.5, "Ted", "Blue");
	array_of_shapes[1] = new Circle(4.1, "Jeff", "Orange");
	array_of_shapes[2] = new Square(6.1, "Steve", "Yellow");
	for(int i = 0; i < 3; i++){
		array_of_shapes[i]->display();
	}

	Circle myCircle{3.2};
	Square mySquare{1};
	if(myCircle > mySquare)
		cout << "the circle has a larger area";

	return 0;
}