#include "rectangle.h"
#include<iostream>
#include<vector>
/*
Create a vector of rectangles
Add 3 Rectangle classes to the vector:
Width	Height		Area
  4		 5			  20
 10		10			 100
100		10			1000

Iterate the vector and display the Area for each Rectangle on one line and the total area for the 
3 rectangles.
*/


int main() 
{
	std::vector<Rectangle> area;
	Rectangle area(4, 5);
	Rectangle area(10, 10);
	Rectangle area(100, 10);

	for (auto a : area)         //iterates the vector
	{
		std::cout << a.get_area() << "\n";
	}

	return 0;
}