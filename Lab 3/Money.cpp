#include "Money.h"

Money::Money()
{
	//k1 = 0;
	//k5 = 0;
	//k10 = 0;
	//k50 = 0;
	r1 = 0;
	r2 = 0;
	r5 = 0;
	r10 = 0;
	r50 = 0;
	r100 = 0;
	r500 = 0;
	r1000 = 0;
	r5000 = 0;
}

Money::Money(double summ)
{
	Unfold(summ);
}

double Money::Fold()
{
	return (r5000 * 5000) + (r1000 * 1000) + (r500 * 500) + (r100 * 100) + (r50 * 50) + (r10 * 10) /*+ (r5 * 5) + (r2 * 2) + r1 + 
		(k50 * 0.5) + (k10 * 0.1) + (k5 * 0.05) + (k1 * 0.01)*/;
}

void Money::Unfold(double number)
{
	while (number >= 5000)
	{
		r5000++;
		number -= 5000;
	}
	while (number >= 1000)
	{
		r1000++;
		number -= 1000;
	}
	while (number >= 500)
	{
		r500++;
		number -= 500;
	}
	while (number >= 100)
	{
		r100++;
		number -= 100;
	}
	while (number >= 50)
	{
		r50++;
		number -= 50;
	}
	while (number >= 10)
	{
		r10++;
		number -= 10;
	}
	//while (number >= 5)
	//{
	//	r5++;
	//	number -= 5;
	//}
	//while (number >= 2)
	//{
	//	r2++;
	//	number -= 2;
	//}
	//while (number >= 1)
	//{
	//	r1++;
	//	number -= 1;
	//}
	//while (number >= 0.50)
	//{
	//	k50++;
	//	number -= 0.50;
	//}
	//while (number >= 0.10)
	//{
	//	k10++;
	//	number -= 0.10;
	//}
	//while (number >= 0.05)
	//{
	//	k5++;
	//	number -= 0.05;
	//}
	//while (number >= 0.01)
	//{
	//	k1++;
	//	number -= 0.01;
	//}
}

Money Money::operator+(Money& b)
{
	Money temp;
	double x = Fold();
	double y = b.Fold();
	double t = x + y;
	temp.Unfold(t);
	return temp;
	//temp.k1 = k1 + b.k1;
	//temp.k5 = k5 + b.k5 + (temp.k1 % 5);
	//temp.k10 = k10 + b.k10 + (temp.k5 % 2);
	//temp.k50 = k50 + b.k50 + (temp.k10 % 5);
	//temp.r1 = r1 + b.r1 + (temp.k50 % 2);
	//temp.r2 = r2 + b.r2 + (temp.r1 % 2);
	//temp.r5 = r1 + b.r5 + (temp.r1 % 5);
	//temp.r10 = r1 + b.r10 + (temp.r5 % 10);
	//temp.r50 = r1 + b.r50 + (temp.r10 % 5);
	//temp.r100 = r1 + b.r100 + (temp.r50 % 2);
	//temp.r500 = r1 + b.r500 + (temp.r100 % 5);
	//temp.r1000 = r1 + b.r1000 + (temp.r500 % 2);
	//temp.r5000 = r1 + b.r5000 + (temp.r1000 % 5);
	//return temp;
}

Money Money::operator-(Money& b)
{
	Money temp;
	double x = Fold();
	double y = b.Fold();
	double t = x - y;
	temp.Unfold(t);
	return temp;
}

Money Money::operator/(Money& b)
{
	Money temp;
	double x = Fold();
	double y = b.Fold();
	double t = x / y;
	temp.Unfold(t);
	return temp;
}

Money Money::operator/(double a)
{
	Money temp;
	double x = Fold();
	double t = x / a;
	temp.Unfold(t);
	return temp;
}

Money Money::operator*(double a)
{
	Money temp;
	double x = Fold();
	double t = x * a;
	temp.Unfold(t);
	return temp;
}

bool Money::operator<(Money& b)
{
	double x = Fold();
	double y = b.Fold();
	return x < y;
}

bool Money::operator>(Money& b)
{
	double x = Fold();
	double y = b.Fold();
	return x > y;
}

bool Money::operator==(Money& b)
{
	double x = Fold();
	double y = b.Fold();
	return x == y;
}

Money& Money::operator=(Money& b)
{
	//k1 = b.k1;
	//k5 = b.k5;
	//k10 = b.k10;
	//k50 = b.k50;
	r1 = b.r1;
	r2 = b.r2;
	r5 = b.r5;
	r10 = b.r10;
	r50 = b.r50;
	r100 = b.r100;
	r500 = b.r500;
	r1000 = b.r1000;
	r5000 = b.r5000;
	return b;
}

std::ostream& operator<<(std::ostream& os, Money& a)
{
	double x = a.Fold();
	std::string str = std::to_string(x);
	os << str;
	return os;
}

std::istream& operator>>(std::istream& in, Money& a)
{
	double number;
	in >> number;
	a.Unfold(number);
	return in;
}
