#pragma once
#include <string>
#include "Car.h"
#include "Cashbox.h"

using namespace std;
class Car;

class Mechanic {

private:

	string name;
	bool isBusy;

public:

	Car *car;
	Cashbox *cashbox;

	Mechanic();
	~Mechanic();
	void setName(const string& name1);
	void setBusy(bool isBusy1);
	string getName() const;
	bool getBusy() const;

	void doWork(const string& task, Car& car, Cashbox& cb);
};

