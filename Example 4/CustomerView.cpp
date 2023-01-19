// Name: Bruno Stevaux.
// Email: 144894s@acadiau.ca

#include "CustomerView.h"
#include "Layout.h"
#include "WebLayout.h"
#include "ScreenLayout.h"

CustomerView::CustomerView(WebLayout *a)
{
    layout = a;
}

CustomerView::CustomerView(ScreenLayout *a)
{
    layout = a;
}

void CustomerView::add(Product *p, int l)
{
    prod = p;
    len = l;
}

void CustomerView::render()
{
    layout->setWidth(40);
    layout->setColumns(1);
    layout->putHeader();
    for (int i = 0; i < len; i++)
    {
        layout->putLineStart();
        layout->putElement(prod[i].getName(), 100);
        layout->putLineEnd();
    }
    layout->putFooter();
}