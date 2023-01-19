// Name: Bruno Stevaux.
// Email: 144894s@acadiau.ca

#ifndef WEBLAYOUT_H
#define WEBLAYOUT_H

#include "Layout.h"

class WebLayout : public Layout
{
public:
    WebLayout();
    void setWidth(int w);
    void setColumns(int n);
    void putHeader() const;
    void putLineStart() const;
    void putElement(const string &e, int w) const;
    void putElement(int n, int w) const;
    void putLineEnd() const;
    void putFooter() const;

private:
    int col, width;
};

#endif