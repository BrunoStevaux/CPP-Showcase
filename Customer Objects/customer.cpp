// Name: Bruno Stevaux.
// Email: 144894s@acadiau.ca
#include "customer.h"
#include <iostream>

using namespace std;

Customer::Customer(string a,
                   string b,
                   string c,
                   string d,
                   string e,
                   string f,
                   string g,
                   float h)
{
    firstName = a;
    lastName = b;
    addr1 = c;
    addr2 = d;
    city = e;
    prov = f;
    postal = g;
    balance = h;
}

Customers::Customers()
{
    len = 0;
}
ostream &operator<<(ostream &out, const Customers &c)
{
    Customer customer;
    for (int i = 0; i < c.len; i++)
    {
        customer = c.customers[i];
        cout << "|"
             << customer.firstName << "|"
             << customer.lastName << "|"
             << customer.addr1 << "|"
             << customer.addr2 << "|"
             << customer.city << "|"
             << customer.prov << "|"
             << customer.postal << "|"
             << customer.balance << "|"
             << endl;
    }
    return out;
}

istream &operator>>(istream &in, Customers &c)
{
    string currentLine;
    while (getline(in, currentLine))
    {
        Customer customer;
        int counter = 0;

        while (currentLine.find("|") != string::npos)
        {
            string section = currentLine.substr(0, currentLine.find("|"));
            currentLine = currentLine.substr(currentLine.find("|") + 1, currentLine.length() - 1);

            int a = counter % 9;
            int b = counter % 8;

            if (counter == 0)
            {
                counter++;
                continue;
            }

            switch (a)
            {
            case 1:
                customer.firstName = section;
                break;
            case 2:
                customer.lastName = section;
                break;
            case 3:
                customer.addr1 = section;
                break;
            case 4:
                customer.addr2 = section;
                break;
            case 5:
                customer.city = section;
                break;
            case 6:
                customer.prov = section;
                break;
            case 7:
                customer.postal = section;
                break;
            case 8:
                customer.balance = stof(section);
                break;
            }

            if (b == 0)
            {
                c.customers[c.len++] = customer;
                customer = Customer();
                counter = 0;
                continue;
            }
            counter++;
        }
    }
    return in;
}
