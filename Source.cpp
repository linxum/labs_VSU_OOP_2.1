#include <iostream>
#include "Rational.h"

int main()
{
	Rational fraction1(2, 6);
	Rational fraction2(2, 4);
	Rational fraction3 = fraction1 + fraction2;

	std::cout << fraction1.toString() << " + " << fraction2.toString() << " = " << fraction3.toString() << '\n';
	
	if (fraction1 == fraction2)
	{
		std::cout << fraction1.toString() << " = " << fraction2.toString();
	}
	else if (fraction1 > fraction2)
	{
		std::cout << fraction1.toString() << " > " << fraction2.toString();
	}
	else if (fraction1 < fraction2)
	{
		std::cout << fraction1.toString() << " < " << fraction2.toString();
	}
}