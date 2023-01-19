// Name: Bruno Stevaux.
// Email: 144894s@acadiau.ca
#ifndef ABSTRACT_SORT_H
#define ABSTRACT_SORT_H

#include "customer.h"

class AbstractSort
{
    public:
        void sort(Customer v[], int n);
    private:
        virtual int needSwap(Customer a, Customer b) = 0;
        void doSwap(Customer& a, Customer& b);
};

#endif
