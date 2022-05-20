#include "veterinarySurgeon.h"
#define SIZE2 2
class pet {
private:
	int petId;
	char petType[40];
	char petName[40];
	veterinarySurgeon* vet[SIZE2];

public:
	void addvet(veterinarySurgeon* vet1, veterinarySurgeon* vet2);
	pet();
	pet(int ppetId, char ppetType[40], char ppetName[40]);
	void displayDetails();
	~pet();


};