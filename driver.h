class driver
{
private:
	char driverUsername[50];
	char driverPassword[50];

public:
	driver();
	driver(const char username[50], const char password[50]);
	void deliverItem();
	~driver();
};