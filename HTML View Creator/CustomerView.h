// Name: Bruno Stevaux.
// Email: 144894s@acadiau.ca

#ifndef CUSTOMERVIEW_H
#define CUSTOMERVIEW_H

#include "Product.h"
#include "Layout.h"
#include "View.h"
#include "WebLayout.h"
#include "ScreenLayout.h"

class CustomerView : public View
{
public:
    CustomerView(WebLayout *a);
    CustomerView(ScreenLayout *a);

    void add(Product *p, int l);
    void render();

private:
    Layout *layout;
    const Product *prod;
    int len;
};

#endif