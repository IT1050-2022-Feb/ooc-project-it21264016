class guestCustomer {
protected:
	int cusId;
	char cusName[50];
	char cusEmail[40];
	char cusAddress[40];
	int cusTelephone;
public:
	guestCustomer();
	guestCustomer(int CID, const char Name[50], const char
	Email[40], const char Address[40], int telephone);
	void registerUser();
	void serchPetStoreItems();
	void displayItems();
	void displayDetails();
	~guestCustomer();
};