#pragma once
#include <string>
#include "Car.h"
using namespace std;

class Car;

class Human {

private:

	string fullName;
	bool driverLicense;

public:

	void setDriverLicense(bool isLicense);
	bool getDriverLicense() const;
	void setFullName(const string& fullName1);
	string getFullName() const;
	Car* myCar;

};

