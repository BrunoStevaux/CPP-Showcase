// Name: Bruno Stevaux.
// Email: 144894s@acadiau.ca
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <iostream>


using namespace std;

class Customer
{
public:
    std::string firstName;
    std::string lastName;
    std::string addr1;
    std::string addr2;
    std::string city;
    std::string prov;
    std::string postal;
    float balance;

    Customer(std::string first = "",
             std::string last = "",
             std::string addr1 = "",
             std::string addr2 = "",
             std::string city = "",
             std::string prov = "",
             std::string postal = "",
             float bal = 0);
};

class Customers
{
public:
    int len;
    Customers();
    Customer customers[100];
};

ostream &operator<<(ostream &out, const Customers &c);
istream &operator>>(istream &in, Customers &c);

#endif