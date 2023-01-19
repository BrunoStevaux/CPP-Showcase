// Name: Bruno Stevaux.
// Email: 144894s@acadiau.ca
#ifndef SORT_UP_H
#define SORT_UP_H

#include "AbstractSort.h"
#include "customer.h"

class SortUp: public AbstractSort
{
    /* virtual */
    int needSwap(int a, int b)
    {
        return (a > b);
    }
};

#endif
