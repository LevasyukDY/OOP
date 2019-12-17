#pragma once
#include "Car.h"
#include <string>
using namespace std;

class Truck : public Car {

private:
	string bodyType;

public:

	Truck();
	~Truck();
	Truck(float weight,
		  float mileage,
		  float speed,
		  float price,
		  int year,
		  string regNum,
		  string mark,
		  string bodyType);
	void setBodyType(const string &type);
	string getBodyType() const;
	string Info() override;


};

