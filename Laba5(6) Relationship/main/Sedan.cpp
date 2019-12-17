#include "Sedan.h"

Sedan::Sedan()
{

}

Sedan::~Sedan()
{

}

Sedan::Sedan(float weight, float mileage, float speed, float price, int year, string regNum, string mark)
{
	this->weight = weight;
	this->mileage = mileage;
	this->speed = speed;
	this->price = price;
	this->year = year;
	this->regNum = regNum;
	this->mark = mark;
}


void Sedan::setMark(const string& mark1)
{
	mark = mark1;
}


string Sedan::getMark() const
{
	return mark;
}

string Sedan::Info()
{
	return "Седан — закрытый кузов легкового автомобиля с багажником, \nструктурно отделённым от пассажирского салона, без подъёмной двери в задней стенке, \nобычно с двумя или тремя рядами полноразмерных сидений.";
}
