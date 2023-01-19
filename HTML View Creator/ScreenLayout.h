// Name: Bruno Stevaux.
// Email: 144894s@acadiau.ca

#ifndef SCREENLAYOUT_H
#define SCREENLAYOUT_H

#include "Layout.h"

class ScreenLayout : public Layout
{
public:
    ScreenLayout();
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