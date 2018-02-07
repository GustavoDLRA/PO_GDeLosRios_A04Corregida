//
// Created by gusta on 05/02/2018.
//

#ifndef PO_GDELOSRIOS_A04CORREGIDA_CUSTOMER_H
#define PO_GDELOSRIOS_A04CORREGIDA_CUSTOMER_H

#include <iostream>


class Customer {
//Atributos de la clase Customer.
private:
    int id;
    std::string name;
    double discount;
//Metodos de la clase Customer
public:
    Customer(int id, std::string name, double discount);
    int getID();
    std::string getName();
    double getDiscount();
    void setDiscount(double discount);
    std::string toString();
};


#endif //PO_GDELOSRIOS_A04CORREGIDA_CUSTOMER_H
