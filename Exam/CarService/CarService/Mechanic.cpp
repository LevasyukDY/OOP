#include <iostream>
#include "Mechanic.h"

using namespace std;

Mechanic::Mechanic()
{
}

Mechanic::~Mechanic()
{
}

void Mechanic::setName(const string& name1)
{
	name = name1;
}

void Mechanic::setBusy(bool isBusy1)
{
	isBusy = isBusy1;
}

string Mechanic::getName() const
{
	return name;
}

bool Mechanic::getBusy() const
{
	return isBusy;
}

void Mechanic::doWork(const string &task, Car &car, Cashbox &cb)
{
	cout << "Механик сделал:\n" << task << endl;
	isBusy = false;
	car.setWorks(true);
	cb.setSelectedServices(task);
}
