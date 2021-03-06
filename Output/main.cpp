// Output.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>


int main()
{
	std::cout.imbue(std::locale("en-US"));
	std::cout.setf(std::ios::right);
	std::cout.setf(std::ios::fixed);

	double w{ 36364.87 };
	double m{ 12431.33 };
	double e{ 127690.50 };
	double s{ 9200.00 };

	std::cout << std::setw(10) << "West:" << std::setw(5)<<"$"<< std::setw(10) << std::setprecision(2) << w << std::endl;
	std::cout << std::setw(10) << "Midwest:" << std::setw(5)<<"$"<< std::setw(10) << std::setprecision(2) << m << std::endl;
	std::cout << std::setw(10) << "East:" << std::setw(5)<<"$"<< std::setw(10) << std::setprecision(2) << e << std::endl;
	std::cout << std::setw(10) << "South:" << std::setw(5)<<"$"<< std::setw(10) << std::setprecision(2) << s << std::endl;
    return 0;
}

