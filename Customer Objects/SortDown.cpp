// Name: Bruno Stevaux.
// Email: 144894s@acadiau.ca
#include "AbstractSort.h"
#include "customer.h"

class SortDown: public AbstractSort
{
    /* virtual */
    int needSwap(int a, int b)
    {
        return (a < b);
    }
};
