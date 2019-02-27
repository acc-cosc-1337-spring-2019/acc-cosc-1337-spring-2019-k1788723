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
	std::vector<Rectangle> rectangles = Rectangle(4, 5), Rectangle(10, 10), Rectangle(100, 10);

	for (auto r : rectangles)         //iterates the vector
	{
		std::cout << r.get_area() << "\n";
		total_area += r.get_area();
	}
	std::cout << "Total Area: " << total_area;

	return 0;
}