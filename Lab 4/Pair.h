#pragma once
#include <iostream>

class Pair
{
protected:
	int a, b;
public:
	Pair();
	Pair(int, int);

	Pair* operator +(Pair&);
	Pair* operator -(Pair&);
	Pair* operator *(Pair&);
	bool operator ==(Pair&);
	friend std::ostream& operator <<(std::ostream&, Pair&);
	friend std::istream& operator >>(std::istream&, Pair&);
};
