#include "Car_Service.h"

void Car_Service::setServices(const string& services1)
{
	services = services1;
}

string Car_Service::getServices() const
{
	return services;
}
