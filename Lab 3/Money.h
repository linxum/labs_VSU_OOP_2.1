#ifndef MONEY_LAB3_OOP
#define MONEY_LAB3_OOP
#pragma once
#include <string>
#include <iostream>
#include <sstream>
#include <cmath>

class Money
{
	//int k1 = 0;
	//int k5 = 0;
	//int k10 = 0;
	//int k50 = 0;
	int r1 = 0;
	int r2 = 0;
	int r5 = 0;
	int r10 = 0;
	int r50 = 0;
	int r100 = 0;
	int r500 = 0;
	int r1000 = 0;
	int r5000 = 0;
public:
	Money();
	Money(double);

	double Fold();
	void Unfold(double);

	Money operator+(Money& b);
	Money operator-(Money& b);
	Money operator/(Money& b);
	Money operator/(double);
	Money operator*(double);

	bool operator<(Money& b);
	bool operator>(Money& b);
	bool operator==(Money& b);

	Money& operator=(Money& b);
	friend std::ostream& operator<<(std::ostream& os, Money& a);
	friend std::istream& operator>>(std::istream& in, Money& a);
};

#endif

