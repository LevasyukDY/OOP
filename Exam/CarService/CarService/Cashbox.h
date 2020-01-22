#pragma once
#include <string>

using namespace std;

class Cashbox {

private:

	string selectedServices;
	double price;

public:

	Cashbox();
	~Cashbox();
	void setSelectedServices(const string& selectedServices1);
	void setPrice(double price1);
	string getSelectedServices() const;
	double getPrice() const;
	
	void printCheck();
};

