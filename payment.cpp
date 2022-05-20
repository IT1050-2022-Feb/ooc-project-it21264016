#include "payment.h"
#include <cstring>
payment::payment(int ppaymentId,const char ppaymentType[40]) {
	paymentId = ppaymentId;
	strcpy(paymentType, ppaymentType);
}
void payment::validDetails() {}

float payment::calculateTotal(float price, float discount) {
	return (price - discount);
}
payment::~payment()
{
	
}

//payment object creation
   payment *n_payment = new payment(443335,"credit");
