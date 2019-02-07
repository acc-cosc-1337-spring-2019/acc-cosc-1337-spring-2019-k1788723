#include<iostream>
#include "decisions.h"
#include "decisions.cpp"
//write include statements

/*
In main write code to capture a letter_grade and credit_hours from the keyboard:

Grade   Credit Hours	grade_points   credit_points
A          3            4              12
B          3            3               9
C          3            2               6
-----------------------------------------------
           9                           27
After each user input convert the Grade to grade points by calling the get_grade_points function, and
keep a running total for both credit_points and credit_hours.

Call the calculate_gpa function with its arguments.
The GPA should calculate to 3.0, make sure to display it before program exits.

Display:
GPA 3.0

*/
int main() 
{
	double letter_grade;
	double hours;

	std::cout << "Enter a letter grade";
	std::cin >> letter_grade;
	std::cout << "Enter a credit hours";
	std::cin >> hours;

	double points;
	points = get_grade_points(letter_grade);

	double gpa;
	gpa = calculate_gpa(hours, points);

	return 0;
}