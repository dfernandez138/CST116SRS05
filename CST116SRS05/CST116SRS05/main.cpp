// CST116SRS05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iomanip>
#include <iostream>
#include <cmath>


int main()
{
	for (int i{ 1901 }; i != 2099; ++i)
	{
		std::cout << i << ",";
	}

	std::cout << "." << std::endl;
    return 0;
}

