//
// Created by gusta on 05/02/2018.
//

#include "Invoice.h"
Invoice::Invoice(std::string id, int customerID, std::string name, double discount) {
    this->id=id;

}
Invoice::Invoice(std::string id, Customer *customer) {

}
std::string Invoice::getID() {
    return id;
}
Customer*Invoice::getCustomer() {
    return customer;
}
void Invoice::setCustomer(Customer *customer) {
    this->customer=customer;
}
double Invoice::getAmount() {
    return amount;
}
double Invoice::getAmountAfterDiscount() {
    return amount-(amount*customer->getDiscount());
}
std::string Invoice::getCustomerName() {
    return customer->getName();
}
bool Invoice::addItem(std::string id, std::string description, int quantity, double unitPrice) {

}
bool Invoice::addItem(InvoiceItem *item) {

}
bool Invoice::removeItem(std::string id) {

}
void Invoice::updateItem(std::string id, std::string desc) {

}
bool Invoice::updateItem(std::string id, int quantity) {
    
}
bool Invoice::updateItem(std::string id, double unitPrice) {

}
bool Invoice::updateItem(InvoiceItem *item) {

}
std::string Invoice::toString() {

}
void Invoice::recalculateAmount() {
    /*if (addItem()==true){

    }
     if(removeItem()==true){

    }
     if(updateItem()==true){

     }*/

}
bool Invoice::findItem(std::string id) {
    
}
