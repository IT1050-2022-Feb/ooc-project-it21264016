#include <iostream>
#include <cstring>
using namespace std;
//including header files 
#include "appointment.h"
#include "deliveryStaff.h"
#include "driver.h"
#include "guestCustomer.h"
#include "item.h"
#include "order.h"
#include "payment.h"
#include "pet.h"
#include "petStoreManager.h"
#include "registerUser.h"
#include "veterinarySurgeon.h"

int main() {

    //appointment object creation
    appointment* n_appointment = new appointment("100", "05/08/2022");
    cout << "Appointment:" << endl;
    cout << endl;
    n_appointment->displayDetails();

    //Guest customer object creation
    guestCustomer* n_guestCustomer = new guestCustomer(05, "Kamal", "kamalbandara2000@gmail.com", "Maralanda,Kurunegala", 077 - 2345656);

    cout << endl;
    cout << "=======================================" << endl;
    cout << endl;

    //veterinary surgeon object creation
    veterinarySurgeon* n_veterinarySurgeon = new veterinarySurgeon("lakshan55", "lakshan", "lakshan77@gmail.com", "5566004", 9988);
    cout << "Veterinary Surgeon:" << endl;
    cout << endl;
    n_veterinarySurgeon->displayDetails();

    //pet object creation
    pet* n_pet = new pet(006, "Dog", "Shadow");
    cout << endl;
    cout << "=======================================" << endl;
    cout << endl;

    cout << "Pet:" << endl;
    cout << endl;
    n_pet->displayDetails();

    //payment object creation
    payment* n_payment = new payment(443335, "credit");

    //driver object creation
    driver* n_driver = new driver("kamal12345", "bhv25454");
    cout << endl;
    cout << "=======================================" << endl;
    cout << endl;

    //deliveryStaff object creation
    deliveryStaff* n_deliveryStaff = new deliveryStaff("001", "abc1245", "kamal12345", "bhv25454", "nuwan546", "mnb4515");

    //order object creation
    order* n_order = new order(0012, "colombo", 1234);

    deliveryStaff* d1 = new deliveryStaff();
    deliveryStaff* d2 = new deliveryStaff();

    n_order->addDelivary(d1, d2);

    payment* pay1 = new payment(001, "credit");
    payment* pay2 = new payment(002, "debit");

    n_order->addPayment(pay1, pay2);
    cout << "Order:" << endl;
    cout << endl;
    n_order->displayDetails();


    //petStoreManager object creation
    cout << endl;
    cout << "=======================================" << endl;
    cout << endl;

    petStoreManager* pet_m = new petStoreManager("akila456", "ahsvd456");

    order* o1 = new order(0012, "colombo", 1234);
    order* o2 = new order(0013, "kalutara", 456);

    pet_m->addOrder(o1, o2);


    //item object creation
    item* item_1 = new item(001, "biscuit", 111, "kalutara", 110, 004, "colombo", 554);

    deliveryStaff* d_staff1 = new deliveryStaff();
    deliveryStaff* d_staff2 = new deliveryStaff();

    item_1->adddelivary(d_staff1, d_staff2);

    petStoreManager* petStore_m1 = new petStoreManager("124avishka", "4578shgvd");
    petStoreManager* petStore_m2 = new petStoreManager("546nuwan", "4567lkhg");

    item_1->addPetStoreManager(petStore_m1, petStore_m2);
    delete item_1;

    //register User object creation
    cout << "Register User:" << endl;
    cout << endl;
    registeredUser* register_u = new registeredUser("4527kavidu", "12345ghgyn", 5444, "pawan", "pawan@gmail.com", "pannipitiya", 83330990);
    register_u->displayDetails();

    delete n_appointment;
    delete n_guestCustomer;
    delete n_veterinarySurgeon;
    delete n_pet;
    delete n_payment;
    delete n_driver;
    delete n_order;
    delete n_deliveryStaff;
    delete pet_m;
    delete item_1;
    delete register_u;

    return  0;
}
