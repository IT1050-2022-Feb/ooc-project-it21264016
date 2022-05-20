#include "order.h"
#include <cstring>
#include <iostream>
using namespace std;
order::order(int porderId, const char plocation[40], int pofferCode)
{
	orderId = porderId;
	strcpy(location, plocation);
	offerCode = pofferCode;

}
void order::addDelivary(deliveryStaff* del1, deliveryStaff* del2) {
	del[0] = del1;
	del[1] = del2;
}

void order::addPayment(payment* pay1, payment* pay2) {
	pay[0] = pay1;
	pay[1] = pay2;
}

void order::deliverItem() {}
void order::placeOrder() {}
void order::displayDetails()
{
	cout << "order ID is " << orderId << endl;
	cout << "Location is " << location << endl;
	cout << "offercode is " << offerCode << endl;

}
void order::confirmOrder() {}
void order::removeOrder() {}
order::~order()
{

}