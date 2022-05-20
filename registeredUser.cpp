#include "guestCustomer.h"
#include "appointment.h"
#include "item.h"
#include "pet.h"
#include "registeredUser.h"
#include <cstring>
#include <iostream>
registeredUser::registeredUser(char pcusUsername[50], char pcusPassword[50],int CID , char Name[50] , char Email[40] , char Address[40] , int telephone)
{
	strcpy(cusUsername, pcusUsername);
	strcpy(cusPassword, pcusPassword);
  cusId = CID;
  strcpy(cusName,Name);
  strcpy(cusEmail,Email);
  strcpy(cusAddress,Address);
  cusTelephone = telephone;
  


}

void registeredUser::registerPet()
{

}

void registeredUser::updateAppointment()
{

}

void registeredUser::deleteAppointment()
{

}

void registeredUser::buyItem(item* itm)
{

}

registeredUser::~registeredUser()
{

}