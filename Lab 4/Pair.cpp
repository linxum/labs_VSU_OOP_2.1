#include "Pair.h"

Pair::Pair()
{
	a = 0;
	b = 0;
}

Pair::Pair(int a, int b)
{
	this->a = a;
	this->b = b;
}

Pair* Pair::operator+(Pair& object)
{
	a = a + object.a;
	b = b + object.b;
	return this;
}

Pair* Pair::operator-(Pair& object)
{
	a = a + object.a;
	b = b + object.b;
	return this;
}

Pair* Pair::operator*(Pair& object)
{
	a = a * object.a;
	b = b * object.b;
	return this;
}

Pair* Pair::operator/(Pair& object)
{
	a = a / object.a;
	b = b / object.b;
	return this;
}

bool Pair::operator==(Pair& object)
{
	if (a == object.a)
		if (b == object.b)
			return true;
		else
			return false;
	else
		return false;
}

std::ostream& operator<<(std::ostream& output, Pair& object)
{
	output << object.a << ", " << object.b << std::endl;
	return output;
}

std::istream& operator>>(std::istream& input, Pair& object)
{
	input >> object.a >> object.b;
	return input;
}
