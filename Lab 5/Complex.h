#pragma once
#include "Pair.h"
class Complex: public Pair
{
public:
	Complex();
	Complex(int, int);

	Pair* add(Pair*) override;
	Pair* sub(Pair*) override;
	Pair* mul(Pair*) override;
	Pair* div(Pair*) override;
	bool is_equal(Pair*) override;

	std::string print() override;
	Pair* input() override;
};

