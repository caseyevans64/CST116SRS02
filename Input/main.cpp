// Input.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
int main()
{
	
	double x;
	

	std::cout <<std::setw(15) << "Enter a number";

	std::cin >> x;
	
	std::cout<<std::scientific<< x;
	
	///std::cout.setf(std::ios::scientific);

	///std::cout<<x;

    return 0;
}

