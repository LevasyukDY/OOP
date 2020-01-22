#include "Car.h"

void Car::setMark(const string& mark1)
{
	mark = mark1;
}

void Car::setType(const string& type1)
{
	type = type1;
}

void Car::setWorks(bool isWorks1)
{
	isWorks = isWorks1;
}

string Car::getMark() const
{
	return mark;
}

string Car::getType() const
{
	return type;
}

bool Car::getWorks() const
{
	return isWorks;
}
