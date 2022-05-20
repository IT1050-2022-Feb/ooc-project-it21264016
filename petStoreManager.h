#include "order.h"
#define SIZE 2
class petStoreManager {

private:
	char psmUsername[40];
	char psmPassword[40];
	order* odr[SIZE];

public:

	petStoreManager(const char ppsmUsername[40], const char ppsmPassword[40]);
	void addOrder(order* odr1, order* odr2);
	void checkOrders();
	void restokItems();
	~petStoreManager();
};
