#ifndef CONSTRUCT_DESTRUCT
#define CONSTRUCT_DESTRUCT

#include <iostream>
#include <cmath>
#include <fstream>
#include <string>

const double PI = 3.14159265;
const int n = 4;

class MathVector {
private:
	double x;
	double y;
	double z;
	double t;

public:
	MathVector sum(MathVector, MathVector);
	MathVector minus(MathVector, MathVector);
	MathVector multiply(MathVector, double);
	double scalarmultiply(MathVector, MathVector);
	double angle(MathVector, MathVector);
	double length();
	void display_MathVector();

	MathVector(double, double, double, double);
	MathVector();
	~MathVector();
};

class Circle {
private:
	double rad;
public:
	void length();
	void square();
	void display_Circle();

	Circle(double);
	Circle();
	~Circle();
};

static int size_arr = 0;
int count();

class Complex {
public:
	double re;
	double im;
	Complex summa(Complex n1);
	Complex minus(Complex n1);
	Complex multiply(Complex n1);
	Complex divide(Complex n1);
	void abs();
	Complex number(std::string);

	Complex(double, double);
	Complex();
	~Complex();
};

void schet(Complex* arr);
Complex number(std::string);
Complex maximum(Complex*, int);

#endif // !CONSTRUCT_DESTRUCT
