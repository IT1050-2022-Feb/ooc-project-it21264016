#include "guestCustomer.h"
#include <cstring>
#include<iostream>
using namespace std;
guestCustomer::guestCustomer(int cID, const char name[50], const char
email[40], const char address[40], int telephone)
{
	cusId = cID;
	strcpy(cusName, name);
	strcpy(cusEmail, email);
	strcpy(cusAddress, address);
	cusTelephone = telephone;
}
void guestCustomer::registerUser()
{
}
void guestCustomer::serchPetStoreItems()
{
}
void guestCustomer::displayItems()
{
}
void guestCustomer :: displayDetails(){
	cout << "the customer Id is: " << cusId << endl;
	cout << "the customer name is: " << cusName << endl;
	cout << "the customer email is: " << cusEmail << endl;

	cout << "the customer address is : " << cusAddress << endl;
	cout << "the telephone number is : " << cusTelephone << endl;
}
guestCustomer::~guestCustomer()
{
}
