class appointment {
private:
	char appointmentID[30];
	char date[20];
public:
	appointment();
	appointment(const char pappointmentID[30], const char pdate[20]);
	void displayDetails();
	~appointment();
};

