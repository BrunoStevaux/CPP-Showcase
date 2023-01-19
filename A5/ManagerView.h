// Name: Bruno Stevaux.
// Email: 144894s@acadiau.ca

#ifndef MANAGERVIEW_H
#define MANAGERVIEW_H

#include "Product.h"
#include "Layout.h"
#include "View.h"
#include "WebLayout.h"
#include "ScreenLayout.h"

class ManagerView : public View
{
public:
    ManagerView(WebLayout *a);
    ManagerView(ScreenLayout *a);
    void add(Product *p, int l);
    void render();

private:
    Layout *layout;
    const Product *prod;
    int len;
};

#endif