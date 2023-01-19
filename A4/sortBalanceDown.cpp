// Name: Bruno Stevaux.
// Email: 144894s@acadiau.ca
#ifndef SORTBALANCEDOWN_H
#define SORTBALANCEDOWN_H

#include "AbstractSort.h"
#include "customer.h"

class sortBalanceDown : public AbstractSort
{
    /* virtual */
    int needSwap(Customer customer1, Customer customer2)
    {
        return (customer1.balance < customer2.balance);
    }
};

#endif
