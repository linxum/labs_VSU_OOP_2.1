#include "Bankomat.h"
#include "Money.h"

Bankomat::Bankomat()
{
	id = 0;
	Money a(0.0);
	last_sum = a;
	min_sum = a;
	max_sum = a;
}

Bankomat::Bankomat(int _id, Money _last_summ, Money _min, Money _max)
{
	id = _id;
	last_sum = _last_summ;
	min_sum = _min;
	max_sum = _max;
}

bool Bankomat::Check(Money sum)
{
	if ((min_sum < sum) && (sum < max_sum) && (sum < last_sum))
		return true;
	else
		return false;
}

void Bankomat::LoadMoney(Money& b)
{
	Money temp = last_sum + b;
	last_sum = temp;
}

void Bankomat::CutMoney(Money& b)
{
	if (Check(b))
	{
		Money temp = last_sum - b;
		last_sum = temp;
	}
}

std::string Bankomat::toString()
{
	std::stringstream stream;
	stream << last_sum;
	std::string str;
	stream >> str;
	return str;
}

std::ostream& operator<<(std::ostream& stream, Bankomat a)
{
	return stream << a.toString();
}
