#include "Truck.h"

Truck::Truck()
{

}

Truck::~Truck()
{

}

Truck::Truck(float weight, float mileage, float speed, float price, int year, 
	string regNum, string mark, string bodyType)
{
	this->weight = weight;
	this->mileage = mileage;
	this->speed = speed;
	this->price = price;
	this->year = year;
	this->regNum = regNum;
	this->mark = mark;
	this->bodyType = bodyType;
}

void Truck::setBodyType(const string& type)
{
	this->bodyType = type;
}

string Truck::getBodyType() const
{
	return bodyType;
}


string Truck::Info()
{
	return "Грузовой автомобиль — автомобиль, предназначенный для перевозки грузов в кузове \nили на грузовой платформе. Для обобщённого обозначения машин, \nсозданных на базе грузового автомобиля, используется термин грузовая техника.";
}
