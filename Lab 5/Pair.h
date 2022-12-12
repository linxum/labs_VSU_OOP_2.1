#pragma once
#include <iostream>
#include <string>

class Pair
{
protected:
	int a;
	int b;
public:
	Pair() : a(0), b(0) {};
	Pair(int _a, int _b) : a(_a), b(_b) {};
	virtual Pair* add(Pair* object) = 0; // +
	virtual Pair* sub(Pair* object) = 0; // -
	virtual Pair* mul(Pair* object) = 0; // *
	virtual Pair* div(Pair* object) = 0; // /
	virtual bool is_equal(Pair* object) = 0; // =
	virtual std::string print() = 0; // <<
	virtual Pair* input() = 0; // >>
};
