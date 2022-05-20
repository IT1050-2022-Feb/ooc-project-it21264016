#include "item.h"
#include "deliveryStaff.h"
#include "petStoreManager.h"
#include <iostream>
#include <cstring>
#define SIZE 2

item::item()
{
 itemId=0;
 strcpy(itemName,"");	
}
item::item(int pitemId, const char pitemName[40], int porderID_1, const char plocation_1[40], int offerCode_1, int porderID_2, const char plocation_2[40], int offerCode_2)
{
	itemId = pitemId;
	strcpy(itemName, pitemName);
	ord[0] = new order(porderID_1, plocation_1, offerCode_1);

	ord[1] = new order(porderID_2, plocation_2, offerCode_2);
}

void item::adddelivary(deliveryStaff* del1, deliveryStaff* del2) {
	del[0] = del1;
	del[1] = del2;
}

void item::addPetStoreManager(petStoreManager* PSM1, petStoreManager* PSM2)
{
	PSM[0] = PSM1;
	PSM[1] = PSM2;
}
void item::addItems() {}
void item::UpdateItems() {}
void item::restockItems() {}
item::~item()
{

}