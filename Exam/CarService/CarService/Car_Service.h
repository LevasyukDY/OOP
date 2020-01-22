#pragma once
#include <string>
#include "Cashbox.h"
#include "Mechanic.h"
#include "Car.h"

using namespace std;

class Car_Service {

private:
	string services;

public:

	Cashbox cashbox;
	Mechanic mechanic;

	void setServices(const string& services1);
	string getServices() const;
};

