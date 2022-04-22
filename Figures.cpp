#include "Construct_Destruct.h"

void Circle::length()
{
	double L = 2 * 3.14 * rad;
	std::cout << "L = " << L << std::endl;
}

void Circle::square()
{
	double S = 3.14 * pow(rad, 2);
	std::cout << "S = " << S << std::endl;
}

void Circle::display_Circle()
{
	std::cout << "radius = " << this->rad << std::endl;
}

Circle::Circle(double a)
{
	rad = a;
	std::cout << "Construct Circle";
}

Circle::Circle()
{
	rad = 0;
	std::cout << "Construct Circle";
}

Circle::~Circle()
{
	std::cout << "Destruct_Circle";
}
