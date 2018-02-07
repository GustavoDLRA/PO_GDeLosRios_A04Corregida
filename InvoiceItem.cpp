//
// Created by gusta on 05/02/2018.
//

#include "InvoiceItem.h"
InvoiceItem::InvoiceItem(std::string id, std::string description, int quantity, double unitPrice) {
    this->id=id;
    this->description=description;
    this->quantity=quantity;
    this->unitPrice=unitPrice;
}
std::string InvoiceItem::getID() {
    return this->id;
}
std::string InvoiceItem::getDescription() {
    return this->description;
}
void InvoiceItem::setDescription(std::string description) {
    this->description=description;
}
int InvoiceItem::getQuantity() {
    return this->quantity;
}
bool InvoiceItem::setQuantity(int quantity) {
    bool status= true;
    if(quantity>0) {
        status = true;
        std::cout << "La cantidad de artículos ya fue introducida" << "\n";
    }
    if(quantity==0){
        status=false;
        std::cout<<"La cantidad de artículos no ha sido introducida"<<"\n";
        std::cout<<"INTRODUCIR UNA CANTIDAD DE ARTÍCULOS."<<"\n";
        this->quantity=quantity; //Puede que se tenga que cambiar por un getQuantity();
    }

}
double InvoiceItem::getUnitPrice() {
    return this->unitPrice;
}
bool InvoiceItem::setUnitPrice(double unitPrice) {
    bool status=true;
    if(unitPrice>0){
        status=true;
        std::cout<<"El valor del precio ya ha sido introducido"<<"\n";
    }
    if(unitPrice==0){
        status=false;
        std::cout<<"El valor del precio unitario, no ha sido introducido"<<"\n";
        std::cout<<"INTRODUCIR UN PRECIO UNITARIO."<<"\n";
        this->unitPrice=unitPrice; //Puede que tenga que cambiar esto por un getUnitPrice()
    }
}
double InvoiceItem::getTotal() {
    return this->unitPrice*quantity;
}
std::string InvoiceItem::toString() {
    return "InvoiceItem[id = "+getID()+", description= "+getDescription()+", quantity = "+(std::to_string(getQuantity()))+", unitPrice = "+(std::to_string(getUnitPrice()))+"]";
//Checar que esto funcione en un Main.
}