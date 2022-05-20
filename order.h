#define SIZE 2
#include "deliveryStaff.h"
#include "payment.h"
#include <cstring>
class order
{
private:
	int orderId;
	char location[40];
	int offerCode;
	deliveryStaff* del[SIZE];
	payment* pay[SIZE];

public:
	order();
	order(int porderId, const char plocation[40], int pofferCode);
	void addDelivary(deliveryStaff* del1, deliveryStaff* del2);
	void addPayment(payment* pay1, payment* pay2);
	void deliverItem();
	void placeOrder();
	void displayDetails();
	void confirmOrder();
	void removeOrder();
	~order();
};