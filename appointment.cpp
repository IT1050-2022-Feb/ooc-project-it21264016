#include "appointment.h"
#include <cstring>
#include <iostream>
using namespace std;

appointment::appointment()
{
	strcpy(appointmentID, "");
	strcpy(date, "");


}
appointment::appointment(const char pappointmentID[30], const char pdate[20])
{
	strcpy(appointmentID, pappointmentID);
	strcpy(date, pdate);


}
void appointment::displayDetails()
{
	cout <<"Appointment ID :" << appointmentID << endl;
	cout << "Appintment Date :" << date << endl;
}

appointment::~appointment()
{

}