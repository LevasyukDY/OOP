#include <iostream>
#include "Cashbox.h"

using namespace std;

Cashbox::Cashbox()
{
}

Cashbox::~Cashbox()
{
}

void Cashbox::setSelectedServices(const string& selectedServices1)
{
	selectedServices = selectedServices1;
}

void Cashbox::setPrice(double price1)
{
	price = price1;
}

string Cashbox::getSelectedServices() const
{
	return selectedServices;
}

double Cashbox::getPrice() const
{
	return price;
}

void Cashbox::printCheck()
{
	cout << "Выполненные работы:" << endl;
	cout << selectedServices << endl << endl;
	cout << "Итог: " << price << " RUB";
}
