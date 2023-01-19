// Name: Bruno Stevaux.
// Email: 144894s@acadiau.ca
#ifndef SORTNAMEDOWN_H
#define SORTNAMEDOWN_H

#include "AbstractSort.h"
#include "customer.h"
#include <string>
#include <cctype>

class sortNameUp : public AbstractSort
{
    /* virtual */
    int needSwap(Customer customer1, Customer customer2)
    {
        if (customer2.lastName < customer1.lastName)
        {
            return true;
        }
        else if (customer1.lastName == customer2.lastName)
        {
            if (customer2.firstName < customer1.firstName)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
};

#endif
