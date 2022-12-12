#pragma once
#include "Pair.h"
class Money: public Pair
{
	long a;
	unsigned int b;
public:
	Money() : Pair() {};
	Money(int, int);

	Pair* add(Pair* object) override;
	Pair* sub(Pair* object) override;
	Pair* mul(Pair* object) override;
	Pair* div(Pair* object) override;
	bool is_equal(Pair* object) override;
	std::string print() override;
	Pair* input() override;
};

