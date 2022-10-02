#include "Rational.h"

int Rational::NOD(int a, int b)
{
	a = abs(a); 
	b = abs(b);
	if (b == 0)
	{
		return a;
	}
	else return NOD(b, a % b);
}

void Rational::reduce(int& a, int& b)
{
	int x = NOD(a, b);
	a /= x;
	b /= x;
}

Rational::Rational()
{
	a = 1;
	b = 1;
}

Rational::Rational(int _a, int _b)
{
	if (b == 0)
	{
		a = 1;
		b = 1;
	}
	reduce(_a, _b);
	a = _a;
	b = _b;
}

void Rational::setA(int _a)
{
	a = _a;
}

void Rational::setB(int _b)
{
	b = _b;
}

int Rational::getA()
{
	return a;
}

int Rational::getB()
{
	return b;
}

Rational Rational::operator+(Rational p)
{
	Rational temp;
	temp.a = a * p.b + b * p.a;
	temp.b = b * p.b;
	reduce(temp.a, temp.b);
	return temp;
}

Rational Rational::operator-(Rational p)
{
	Rational temp;
	temp.a = a * p.b - b * p.a;
	temp.b = b * p.b;
	reduce(temp.a, temp.b);
	return temp;
}

Rational Rational::operator*(Rational p)
{
	Rational temp;
	temp.a = a * p.a;
	temp.b = b * p.b;
	reduce(temp.a, temp.b);
	return temp;
}

Rational Rational::operator/(Rational p)
{
	Rational temp;
	temp.a = a * p.b;
	temp.b = b * p.a;
	reduce(temp.a, temp.b);
	return temp;
}

bool Rational::operator==(Rational p)
{
	reduce(a, b);
	reduce(p.a, p.b);
	return (a == p.a && b == p.b);
}

bool Rational::operator>(Rational p)
{
	reduce(a, b);
	reduce(p.a, p.b);
	return (a * p.b > b * p.a);
}

bool Rational::operator<(Rational p)
{
	reduce(a, b);
	reduce(p.a, p.b);
	return (a * p.b < b * p.a);
}

std::string Rational::toString()
{
	return "ad" + std::to_string(a) + "/" + std::to_string(b);
}
