#include "deliveryStaff.h"
#include "order.h"
#include "petStoreManager.h"
#define SIZE 2
class item
{
private:
	int itemId;
	char itemName[40];
	deliveryStaff* del[SIZE];
	order* ord[SIZE];
	petStoreManager* PSM[SIZE];
public:
	item();
	item(int pitemId, const char pitemName[40], int porderID_1, const char plocation_1[40], int offerCode_1, int porderID_2, const char plocation_2[40], int offerCode_2);
	void adddelivary(deliveryStaff* del1, deliveryStaff* del2);
	void addPetStoreManager(petStoreManager* PSM1, petStoreManager* PSM2);
	void addItems();
	void UpdateItems();
	void restockItems();
	~item();
};