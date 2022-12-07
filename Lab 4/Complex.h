#include "Pair.h"
#pragma once

class Complex: public Pair
{
public:
	Complex();
	Complex(int, int);

	Complex* operator *(Complex&);
	bool operator ==(Complex&);

	friend std::ostream& operator <<(std::ostream&, Complex&);
	friend std::istream& operator >>(std::istream&, Complex&);

};

