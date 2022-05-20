#include "veterinarySurgeon.h"
using namespace std;
#include<cstring>
//veterinarySurgeon class funcions implementation
veterinarySurgeon::veterinarySurgeon(const char pvetUserName[40], const char pvetName[40], const char pvetEmail[30],const char pvetPassword[30], int pvetId) {
    strcpy(vetUserName, pvetUserName);
    strcpy(vetName, pvetName);
    strcpy(vetEmail, pvetEmail);
    strcpy(vetPassword, pvetPassword);
    vetId = pvetId;
}
void veterinarySurgeon::login() {}

void veterinarySurgeon::logout() {}
void veterinarySurgeon::issuePrescription() {}
void veterinarySurgeon::RescheduleAppointment(appointment* appoin) {}
void veterinarySurgeon::displayDetails()
{
    cout << "vet username is: " << vetUserName << endl;
    cout << "vet name is: " << vetName << endl;
    cout << "vet email is: " << vetEmail << endl;
    cout << "vet ID is : " << vetId << endl;

}
veterinarySurgeon :: ~veterinarySurgeon() {}
