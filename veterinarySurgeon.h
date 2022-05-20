#include "appointment.h"
class veterinarySurgeon {
private:
    char vetUserName[40];
    char vetName[40];
    char vetEmail[30];
    char vetPassword[30];
    int vetId;

public:
    veterinarySurgeon(const char pvetUserName[40],const  char pvetName[40],const char pvetEmail[30], const char pvetPassword[30], int pvetId);
    void login();
    void logout();
    void issuePrescription();
    void RescheduleAppointment(appointment* appoin);
    void displayDetails();
    ~veterinarySurgeon();
};
