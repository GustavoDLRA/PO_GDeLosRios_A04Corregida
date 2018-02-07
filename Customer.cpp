//
// Created by gusta on 05/02/2018.
//

#include "Customer.h"
Customer::Customer(int id, std::string name, double discount) {
    this->id=id;
    this->name=name;
    this->discount= discount;
}
int Customer::getID() {
    return id;
}
std::string Customer::getName() {
    return name;
}
double Customer::getDiscount() {
    return discount;
}
void Customer::setDiscount(double discount) {
    this->discount=discount;
}
std::string Customer::toString() {
    return this->getName()+(std::to_string(getID()));
}