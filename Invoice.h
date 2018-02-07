//
// Created by gusta on 05/02/2018.
//

#ifndef PO_GDELOSRIOS_A04CORREGIDA_INVOICE_H
#define PO_GDELOSRIOS_A04CORREGIDA_INVOICE_H

#include <iostream>
#include "Customer.h"
#include "InvoiceItem.h"
#include <array>
class Invoice {
//Atributos de la clase Invoice
private:
    std::string id;
    Customer*customer;
    double amount=0;
    InvoiceItem items [0];
    //Metodos privados de Invoice
    void recalculateAmount();
    bool findItem(std::string id);
public:
//Metodos de la clase Invoice
    Invoice(std::string id, int customerID, std::string name, double discount);
    Invoice(std::string id, Customer*customer);
    std::string getID();
    Customer*getCustomer();
    void setCustomer(Customer*customer);
    double getAmount();
    double getAmountAfterDiscount();
    std::string getCustomerName();
    bool addItem(std::string id, std::string description,int quantity, double unitPrice);
    bool addItem(InvoiceItem*item);
    bool removeItem(std::string id);
    void updateItem(std::string id, std::string desc);
    bool updateItem(std::string id, int quantity);
    bool updateItem(std::string id, double unitPrice);
    bool updateItem(InvoiceItem*item);
    std::string toString();



};


#endif //PO_GDELOSRIOS_A04CORREGIDA_INVOICE_H
