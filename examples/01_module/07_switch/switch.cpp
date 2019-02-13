#include "switch.h"
//write include statement for switch header

//Write code for function that accepts a num and returns a string 
//as follows:
//returns 'Option 1' when value 1
//returns 'Option 2' when value 2
//returns 'Option 3' when value 3
//returns 'Option 4' when value 4
//return 'Invalid Option' otherwise

std::string menu_option(int num)
{
	switch (num)
	{
	case 1:
		return "option 1";
		break;
	case 2:
		return "option 2";
		break;
	case 3:
		return "option 3";
		break;
	case 4:
		return "option 4";
		break;
	default:
		return "invalid option";
	}
}
