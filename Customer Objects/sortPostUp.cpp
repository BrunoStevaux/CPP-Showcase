// Name: Bruno Stevaux.
// Email: 144894s@acadiau.ca
#ifndef SORTPOSTUP_H
#define SORTPOSTUP_H

#include "AbstractSort.h"
#include "customer.h"

class sortPostalUp: public AbstractSort
{
    /* virtual */
    int needSwap(Customer customer1, Customer customer2)
    {
        return (customer1.postal > customer2.postal);
    }
};

#endif
