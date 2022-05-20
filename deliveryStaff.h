#include "driver.h"
#define SIZE 2
class deliveryStaff
{
private:
	char deliverId[10];
	char deliverPassword[50];

	driver* driv[SIZE];

public:
	deliveryStaff();
	deliveryStaff(const char Id[10],const char password[50], const char driverUsername_1[],const char driverPassword_1[],const char
		driverUsername_2[],const char driverPassword_2[]);

	void processOrder();
	void assignDriver();
	void addDeliveryStaff();
	~deliveryStaff();

};