#include "Car.h"


Car::Car()
{
}

Car::~Car()
{
}

void Car::setWeight(float weight1)
{
	weight = weight1;
}


void Car::setMileage(float mileage1)
{
	mileage = mileage1;
}


void Car::setSpeed(float speed1)
{
	speed = speed1;
}


void Car::setPrice(long int price1)
{
	price = price1;
}


void Car::setYear(int year1)
{
	year = year1;
}


void Car::setRegNum(const string& regNum1)
{
	regNum = regNum1;
}


float Car::getWeight() const
{
	return weight;
}


float Car::getMileage() const
{
	return mileage;
}


float Car::getSpeed() const
{
	return speed;
}


long int Car::getPrice() const
{
	return price;
}


int Car::getYear() const
{
	return year;
}


string Car::getRegNum() const
{
	return regNum;
}

string Car::Info()
{
	return "Автомобиль — моторное дорожное и вне дорожное транспортное средство, \nиспользуемое для перевозки людей или грузов.";
}
