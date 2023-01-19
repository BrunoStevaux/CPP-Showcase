// Name: Bruno Stevaux.
// Email: 144894s@acadiau.ca

#include "ManagerView.h"
#include "Layout.h"
#include "WebLayout.h"
#include "ScreenLayout.h"

ManagerView::ManagerView(WebLayout *a)
{
    layout = a;
}

ManagerView::ManagerView(ScreenLayout *a)
{
    layout = a;
}

void ManagerView::add(Product *p, int l)
{
    prod = p;
    len = l;
}

void ManagerView::render()
{
    layout->setWidth(100);
    layout->setColumns(3);
    layout->putHeader();
    for (int i = 0; i < len; i++)
    {
        layout->putLineStart();
        layout->putElement(prod[i].getCode(), 30);
        layout->putElement(prod[i].getName(), 50);
        layout->putElement(prod[i].getQuantity(), 20);
        layout->putLineEnd();
    }
    layout->putFooter();
}
