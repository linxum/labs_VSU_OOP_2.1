#include "Money.h"

Money::Money(int _a, int _b)
{
	a = _a;
	b = _b;
}

Pair* Money::add(Pair* object)
{
	Money* _object = dynamic_cast<Money*>(object);
	a = (a + _object->a + ((b + _object->b) >= 100));
	b = (b + _object->b) % 100;
	return object;
}

Pair* Money::sub(Pair* object)
{
	Money* _object = dynamic_cast<Money*>(object);
	a = a - _object->a;
	b = abs(int(b - _object->b));
	if ((b < _object->b) && (a > _object->a))
		a--;
	return object;
}

Pair* Money::mul(Pair* object)
{
	Money* _object = dynamic_cast<Money*>(object);
	int temp;
	int temp_left = a * 100 + b;
	int temp_right = _object->a * 100 + _object->b;
	temp = temp_left * temp_right;
	a = temp / 100;
	b = temp % 100;
	return this;
}

Pair* Money::div(Pair* object)
{
	Money* _object = dynamic_cast<Money*>(object);
	int temp;
	int temp_left = a * 100 + b;
	int temp_right = _object->a * 100 + _object->b;
	temp = temp_left / temp_right;
	a = temp / 100;
	b = temp % 100;
	return this;
}

bool Money::is_equal(Pair* object)
{
	Money* _object = dynamic_cast<Money*>(object);
	return (a == _object->a) && (b == _object->b);
}

std::string Money::print()
{
	return std::to_string(a) + ", " + std::to_string(b);
}

Pair* Money::input()
{
	std::cin >> a >> b;
	return this;
}