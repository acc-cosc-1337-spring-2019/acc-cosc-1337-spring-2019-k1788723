#include<iostream>
#include"vectors.h"
/*
Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main() 
{
	int menu_choice;
	int choice;

	std::cout << "Enter a number";
	std::cin >> choice;
	std::cout << "Enter 1 to get the max. Enter 2 to get primes.";
	std::cin >> menu_choice;

	max = get_max_from_vector(choice);
	prime = vector_of_primes(choice);

	if (menu_choice == 1)
	{
		std::cout << "The max value is:" << max;
	}
	else
	{
		std::cout << "List of primes:" << prime;
	}

	return 0;
}