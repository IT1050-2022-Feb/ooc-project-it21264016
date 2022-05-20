#include "petStoreManager.h"
#include "order.h"
#include <iostream>
#include <cstring>

petStoreManager::petStoreManager(const char ppsmUsername[40], const char ppsmPassword[40])
{
	strcpy(psmUsername, ppsmUsername);
	strcpy(psmPassword, ppsmPassword);

}
void petStoreManager::addOrder(order* odr1, order* odr2)
{
	odr[0] = odr1;
	odr[1] = odr2;
}
void petStoreManager::checkOrders()
{

}
void petStoreManager::restokItems()
{

}
petStoreManager::~petStoreManager()
{

}
