// Name: Bruno Stevaux.
// Email: 144894s@acadiau.ca
#ifndef SORTPOSTDOWN_H
#define SORTPOSTDOWN_H

#include "AbstractSort.h"
#include "customer.h"

class sortPostalDown : public AbstractSort
{
    /* virtual */
    int needSwap(Customer customer1, Customer customer2)
    {
        return (customer1.postal < customer2.postal);
    }
};

#endif
