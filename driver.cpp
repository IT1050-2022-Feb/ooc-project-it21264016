#include "driver.h"
#include "order.h"
#include <iostream>
#include <cstring>
driver::driver(const char username[50], const char password[50])
{
	strcpy(driverUsername, username);
	strcpy(driverPassword, password);

}

void driver::deliverItem()
{

}

driver::~driver()
{

}


//petStoreManager class
class petStoreManager {

private:
	char psmUsername[40];
	char psmPassword[40];
	order* odr[SIZE];

public:

	petStoreManager(const char ppsmUsername[40], const char ppsmPassword[40]);
	void addOrder(order* odr1, order* odr2);
	void checkOrders();
	void restokItems();
	~petStoreManager();
};