#ifndef BANKOMAT_LAB3_OOP
#define BANKOMAT_LAB3_OOP
#pragma once

#include <iostream>
#include <string>
#include "Money.h"
#include <sstream>

class Bankomat
{
	int id;
	Money last_sum;
	Money min_sum;
	Money max_sum;
public:
	Bankomat();
	Bankomat(int, Money, Money, Money);
	bool Check(Money);
	void LoadMoney(Money& b);
	void CutMoney(double);

	std::string toString();
	
	friend std::ostream& operator<<(std::ostream& stream, Bankomat a);
	friend std::istream& operator>>(std::istream& stream, Bankomat a);
};

#endif
