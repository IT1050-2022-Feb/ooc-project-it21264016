#include "pet.h"
#include "veterinarySurgeon.h"
#include <cstring>
#include <iostream>
using namespace std;
void pet::addvet(veterinarySurgeon* vet1, veterinarySurgeon* vet2) {
	vet[0] = vet1;
	vet[1] = vet2;
};

pet::pet()
{

}

pet::pet(int ppetId, char ppetType[40], char ppetName[40])
{
	petId = ppetId;
	strcpy(petType, ppetType);
	strcpy(petName, ppetName);

}

void pet::displayDetails()
{
	cout << "Pet ID is: " << petId << endl;
	cout << "Pet type is: " << petType << endl;
	cout << "Pet name is: " << petName << endl;
}

pet::~pet()
{
	for (int i = 0; i < SIZE2; i++)
	{
		delete vet[i];
	}
}