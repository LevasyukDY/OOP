#pragma once
#include "Car.h"
#include <string>
using namespace std;

class Sedan : public Car {

private:
	string mark;

public:

	Sedan();
	~Sedan();
	Sedan(float weight,
		  float mileage,
		  float speed,
		  float price,
		  int year,
		  string regNum,
		  string mark);
	void setMark(const string& mark1);
	string getMark() const;
	string Info() override;


};

