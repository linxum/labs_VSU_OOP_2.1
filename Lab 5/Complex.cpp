#include "Complex.h"

Complex::Complex()
{
	a = 0;
	b = 0;
}

Complex::Complex(int _a, int _b)
{
	a = _a;
	b = _b;
}

Pair* Complex::add(Pair* object)
{
	Complex* _object = dynamic_cast<Complex*>(object);
	Complex tmp;
	tmp.a = a + _object->a;
	tmp.b = b + _object->b;
	a = tmp.a;
	b = tmp.b;
	return object;
}

Pair* Complex::sub(Pair* object)
{
	Complex* _object = dynamic_cast<Complex*>(object);
	Complex tmp;
	tmp.a = a - _object->a;
	tmp.b = b - _object->b;
	a = tmp.a;
	b = tmp.b;
	return object;
}

Pair* Complex::mul(Pair* object)
{
	Complex* _object = dynamic_cast<Complex*>(object);
	Complex tmp;
	tmp.a = a * _object->a - b * _object->b;
	tmp.b = a * _object->b + b * _object->a;
	a = tmp.a;
	b = tmp.b;
	return object;
}

Pair* Complex::div(Pair* object)
{
	Complex* _object = dynamic_cast<Complex*>(object);
	Complex tmp;
	tmp.a = a / _object->a - b / _object->b;
	tmp.b = a / _object->b + b / _object->a;
	a = tmp.a;
	b = tmp.b;
	return object;
}

bool Complex::is_equal(Pair* object)
{
	Complex* _object = dynamic_cast<Complex*>(object);
	return (a == _object->a) && (b == _object->b);
}

std::string Complex::print()
{
	return std::to_string(a) + " + " + std::to_string(b) + "i";
}

Pair* Complex::input()
{
	std::cin >> a >> b;
	return this;
}

