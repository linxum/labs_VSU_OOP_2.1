#ifndef RATIONAL_LAB_OOP
#define RATIONAL_LAB_OOP
#include <iostream>
#include <cmath>
#include <string>

class Rational
{
private:
	int a;
	int b;
	int NOD(int, int);
	void reduce();
public:
	Rational();
	Rational(int, int);
	void setA(int);
	void setB(int);
	int getA();
	int getB();
	
	Rational operator + (Rational);
	Rational operator - (Rational);
	Rational operator * (Rational);
	Rational operator / (Rational);
	bool operator == (Rational);
	bool operator > (Rational);
	bool operator < (Rational);
	
	std::string toString();
};

#endif // !RATIONAL_LAB_OOP
