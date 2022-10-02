#include <iostream>
#include "Rational.h"

int main()
{
	Rational r1(228, 1488);
	Rational r2(69, 1337);
	Rational r3;
	if (r1 > r2)
	{
		r3 = r1 + r2;
	}
	std::cout << r3.getA() << '\n'<< '_' << '\n' << r3.getB();
}
