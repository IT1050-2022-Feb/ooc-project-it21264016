class payment
{
private:
	int paymentId;
	char paymentType[40];

public:

	payment(int ppaymentId, const char ppaymentType[40]);
	void validDetails();
	float calculateTotal(float price, float discount);
	~payment();

};