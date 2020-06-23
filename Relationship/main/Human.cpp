#include "Human.h"

void Human::setDriverLicense(bool isLicense)
{
	driverLicense = isLicense;
}


bool Human::getDriverLicense() const
{
	return driverLicense;
}


void Human::setFullName(const string& fullName1)
{
	fullName = fullName1;
}


string Human::getFullName() const
{
	return fullName;
}

