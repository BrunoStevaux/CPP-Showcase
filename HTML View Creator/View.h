// Name: Bruno Stevaux.
// Email: 144894s@acadiau.ca

#ifndef VIEW_H
#define VIEW_H

#include "Product.h"
#include "Layout.h"

class View
{
public:
    virtual void add(Product* prod, int len) = 0;
    virtual void render() = 0;
};

#endif