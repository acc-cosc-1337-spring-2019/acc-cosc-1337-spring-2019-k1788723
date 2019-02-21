#include "vectors.h"
#include<iostream>
using std::vector;

/*
Write a value return function get_max_from_vector with a const reference 
vector of intsparameter that returns the max value in a vector

@param numbers is a const reference to a vector of integers
@return the max value in the vector
*/

int get_max_from_vector(const std::vector<int>& numbers)
{
	int maxNum = 0
	for (auto n : numbers)
	{
		if n > 0
		{
			maxNum == n;
		}
	}
	return 0;
}

/*
Write a function named is_prime with an integer parameter that
given a number returns true if prime or false if not prime

@param number: Any whole number
@return: bool if prime False if not
*/
bool is_prime(int numbers)
{
	bool is_prime = true;
	int i;
	i = 2;
	while (i < n)
	{
		if (n % i == 0)
		{
			is_prime = false;
			i++
		}
	}
	return 0;
}

/*
Write a a function named vector_of_primes with an integer parameter
that given a number returns all the prime numbers up to the number

Example given number 10 returns a vector with elements 2,3,5,7,

@param int integer value
@return vector of ints containing prime values up to a value

Make sure to use the is_prime function to determine if current 
number is prime.
*/

vector<int> vector_of_primes(int numbers)
{
	vector<int> primes;

	for (int i = 1; i < numbers; ++1)
	{
		if (is_prime(i))
		{
			primes.push_back(i);
		}
	}
	return primes;
}
