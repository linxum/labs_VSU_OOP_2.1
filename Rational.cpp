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

void Rational::reduce()
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
	a = _a;
	b = _b;
	reduce();
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
	temp.reduce();
	return temp;
}

Rational Rational::operator-(Rational p)
{
	Rational temp;
	temp.a = a * p.b - b * p.a;
	temp.b = b * p.b;
	temp.reduce();
	return temp;
}

Rational Rational::operator*(Rational p)
{
	Rational temp;
	temp.a = a * p.a;
	temp.b = b * p.b;
	temp.reduce();
	return temp;
}

Rational Rational::operator/(Rational p)
{
	Rational temp;
	temp.a = a * p.b;
	temp.b = b * p.a;
	temp.reduce();
	return temp;
}

bool Rational::operator==(Rational p)
{
	reduce();
	p.reduce();
	return (a == p.a && b == p.b);
}

bool Rational::operator>(Rational p)
{
	reduce();
	p.reduce();
	return (a * p.b > b * p.a);
}

bool Rational::operator<(Rational p)
{
	reduce();
	p.reduce();
	return (a * p.b < b * p.a);
}

std::string Rational::toString()
{
	return std::to_string(a) + "/" + std::to_string(b);
}
