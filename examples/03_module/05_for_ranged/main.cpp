#include<string>
#include<iostream>
#include "sample_for_ranged.h"

int main() 
{
	//call count letters function
	//loop_vector_w_index();

	std::vector<int> nums = (44, 55, 77, 11, 99);
	nums.push_back(25);                  //adds to the end of vector, 99
	nums.erase(nums.begin() + 1);     //deleting
	loop_vector_w_index(nums);

	for (auto n : nums)               // loop to find num 
	{
		std::cout << n << "\n";
	}

	return 0;
}