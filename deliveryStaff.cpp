#include "deliveryStaff.h"
#include "driver.h"
#include <cstring>

deliveryStaff::deliveryStaff()
{
	strcpy(deliverId, "");
	strcpy(deliverPassword, "");
}
deliveryStaff::deliveryStaff(const char Id[10],const char password[50], const char driverUsername_1[],const char driverPassword_1[], const char
	driverUsername_2[], const char driverPassword_2[])
{
	strcpy(deliverId, Id);
	strcpy(deliverPassword, password);

	driv[0] = new driver(driverUsername_1, driverPassword_1);
	driv[1] = new driver(driverUsername_2, driverPassword_2);
}

void deliveryStaff::processOrder()
{

}

void deliveryStaff::assignDriver()
{

}

deliveryStaff::~deliveryStaff()
{
	for (int i = 0; i < SIZE; i++)
	{
		delete driv[i];
	}

}