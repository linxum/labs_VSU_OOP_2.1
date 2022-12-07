#include "Complex.h"

Complex::Complex()
{
	a = 0;
	b = 0;
}

Complex::Complex(int _a, int _b)
{
	this->a = _a;
	this->b = _b;
}

Complex* Complex::operator*(Complex& object)
{
	int _a = a * object.a - b * object.b;
	int _b = a * object.b + b * object.a;
	a = _a;
	b = _b;
	return this;
}

bool Complex::operator==(Complex& object)
{
	if (a == object.a)
		if (b == object.b)
			return true;
		else return false;
	else if (a == object.b)
		if (b == object.a)
			return true;
		else return false;
	else return false;
}

std::ostream& operator<<(std::ostream& output, Complex& object)
{
	output << object.a << "+" << object.b << "i" << std::endl;
	return output;
}

std::istream& operator>>(std::istream& input, Complex& object)
{
	input >> object.a >> object.b;
	return input;
}
