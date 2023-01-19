// Name: Bruno Stevaux.
// Email: 144894s@acadiau.ca

#include <iostream>
#include "Customer.h"
#include "AbstractSort.h"
#include "sortBalanceUp.cpp"
#include "sortBalanceDown.cpp"
#include "sortNameUp.cpp"
#include "sortNamedown.cpp"
#include "sortPostUp.cpp"
#include "sortPostDown.cpp"
#include <cstdlib>

using namespace std;

int main()
{
    Customers c1;
    cin >> c1;
    cout << "The Customer object is " << endl;
    cout << c1;
    cout << endl;

    AbstractSort *sortObjects2[] = {new sortNameUp, new sortNameDown};
    cout << "Sorting by name Up: " << endl;
    sortObjects2[0]->sort(c1.customers, c1.len);
    cout << c1;
    cout << endl;
    cout << "Sorting by name Down: " << endl;
    sortObjects2[1]->sort(c1.customers, c1.len);
    cout << c1;
    cout << endl;

    AbstractSort *sortObjects3[] = {new sortPostalUp, new sortPostalDown};
    cout << "Sorting by postal Up: " << endl;
    sortObjects3[0]->sort(c1.customers, c1.len);
    cout << c1;
    cout << endl;
    cout << "Sorting by postal Down: " << endl;
    sortObjects3[1]->sort(c1.customers, c1.len);
    cout << c1;
    cout << endl;

    AbstractSort *sortObjects[] = {new sortBalanceUp, new sortBalanceDown};
    cout << "Sorting by owed Up: " << endl;
    sortObjects[0]->sort(c1.customers, c1.len);
    cout << c1;
    cout << endl;
    cout << "Sorting by owed Down: " << endl;
    sortObjects[1]->sort(c1.customers, c1.len);
    cout << c1;
    return 0;
}
