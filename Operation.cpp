#include "Construct_Destruct.h"

int count()
{
	std::ifstream txt("D://C++//OOP//Numbers.txt");
	std::string numb = "";
	if (txt.is_open()) {
		int a = 0;
		while (std::getline(txt, numb)) {
			a += 1;
		}
		return a;
	}
	else return 0;
}

Complex number(std::string numb)
{
	Complex a;
	std::string real, help;
	int i = 0;
	while ((numb[i + 1] != '+') && (numb[i + 1] != '-') && (numb[i + 1] != 'i') && (i + 2 < numb.length())) {
		i += 1;
	}
	help = numb;
	if (numb[i + 1] == 'i') {
		numb = numb.erase(numb.length() - 1);
		a.im = atof(numb.c_str());
		return a;
	}
	else if (i + 2 == numb.length()) {
		numb = numb.erase(numb.length());
		a.re = atof(numb.c_str());
		return a;
	}
	else {
		real = help.erase(i + 1);
		if (numb[i + 1] == '-') {
			numb = numb.erase(0, i + 1);
		}
		else {
			numb = numb.erase(0, i + 1);
		};
		a.re = atof(real.c_str());
		a.im = atof(numb.c_str());
		return a;
	}
}

void schet(Complex *arr)
{
	std::ifstream txt("D://C++//OOP//Numbers.txt");
	std::string numb = "";
	if (txt.is_open()) {
		int i = 0;
		while (std::getline(txt, numb)) {
			arr[i] = number(numb);
			i += 1;
		}
	}
}

Complex maximum(Complex* arr, int n)
{
	Complex max;
	for (int i = 0; i < n; i++)
		if (pow(pow(arr[i].re, 2) + pow(arr[i].im, 2), 0.5) > pow(pow(max.re, 2) + pow(max.im, 2), 0.5)) max = arr[i];
	return max;
}

Complex Complex::summa(Complex n1)
{
	Complex answer{ n1.im + this->im, n1.re + this->re };
	return answer;
}

Complex Complex::minus(Complex n1)
{
	Complex answer{ n1.im - this->im, n1.re - this->re };
	return answer;
}

Complex Complex::multiply(Complex n1)
{
	Complex answer{ n1.im * this->re + n1.re * this->im, n1.re * this->re - n1.im * this->im };
	return answer;
}

Complex Complex::divide(Complex n1)
{
	double a = (-n1.im) * this->re + n1.re * this->im, b = pow(n1.re, 2) + pow(n1.im, 2), c = n1.re * this->re + n1.im * this->im;
	Complex answer{ a / b, c / b };
	return answer;
}

void Complex::abs()
{
	std::cout << pow(pow(re, 2) + pow(im, 2), 0.5) << std::endl;
}

Complex::Complex(double a, double b)
{
	re = a;
	im = b;
	std::cout << "Constructor_Complex\n";
}

Complex::Complex()
{
	re = 0;
	im = 0;
	std::cout << "Constructor_Complex\n";
}

Complex::~Complex()
{
	std::cout << "Deconstructor_Complex\n";
}