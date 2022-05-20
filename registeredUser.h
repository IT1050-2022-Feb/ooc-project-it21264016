#include "guestCustomer.h"
 #include "pet.h"
 #include "appointment.h"
 #include "item.h"
class registeredUser : public guestCustomer
{
protected:
	char cusUsername[50];
	char cusPassword[50];
	pet* pe;

public:
	registeredUser(char pcusUsername[50], char pcusPassword[50],int CID , char Name[50] , char Email[40] , char Address[40] , int telephone);
	void registerPet();
	void updateAppointment();
	void deleteAppointment();
	void buyItem(item* itm);
	
	~registeredUser();
};