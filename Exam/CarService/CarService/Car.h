#pragma once
#include <string>
#include "Mechanic.h"

using namespace std;
class Car_Service;

class Car {

private:

	string mark;
	string type;
	bool isWorks;

public:
	
	Car_Service *carService;

	void setMark(const string& mark1);
	void setType(const string& type1);
	void setWorks(bool isWorks1);
	string getMark() const;
	string getType() const;
	bool getWorks() const;
};

