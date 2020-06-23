#pragma once
#include <string>
#include "Human.h"
#include "Engine.h"
#include "Car_Color.h"
using namespace std;

class Human;

class Car {

protected:

	float weight;
	float mileage;
	float speed;
	long int price;
	int year;
	string regNum;
	string mark;

public:

	Car_Color* color;
	Engine engine;
	Human* myDriver;
	Car();
	~Car();
	void setWeight(float weight1);
	void setMileage(float mileage1);
	void setSpeed(float speed1);
	void setPrice(long int price1);
	void setYear(int year1);
	void setRegNum(const string& regNum1);
	void setMark(const string& mark1);
	string getMark() const;
	float getWeight() const;
	float getMileage() const;
	float getSpeed() const;
	long int getPrice() const;
	int getYear() const;
	string getRegNum() const;
	string virtual Info();


};

