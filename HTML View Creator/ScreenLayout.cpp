// Name: Bruno Stevaux.
// Email: 144894s@acadiau.ca

#include "ScreenLayout.h"
#include "string"
#include <iostream>
#include <iomanip>

using namespace std;

ScreenLayout::ScreenLayout()
{
    // this empty :D 
}

void ScreenLayout::setWidth(int w)
{
    width = w;
}

void ScreenLayout::setColumns(int n)
{
    col = n;
}

void ScreenLayout::putHeader() const
{
    cout << "+";
    for (int i = 0; i < 60 * (width / double(100)) - 2; i++)
        cout << "-";
    cout << "+" << endl;
}

void ScreenLayout::putLineStart() const
{
    cout << "| ";
}

void ScreenLayout::putElement(const string &e, int w) const
{
    int a = (3 * (col-1)) + 4;
    float b = width / 100.0;
    int c = b * 60;
    c = c - a; 
    float d = w / 100.0;

    cout << left << setw((d * c)) << e << " | ";
}

void ScreenLayout::putElement(int n, int w) const
{
    int a = (3 * (col-1)) + 4;
    float b = width / 100.0;
    int c = b * 60;
    c = c - a; 
    float d = w / 100.0;

    cout << right << setw((d * c)) << n << " | ";
}

void ScreenLayout::putLineEnd() const
{
    cout << endl;
}

void ScreenLayout::putFooter() const
{
    putHeader(); //lmao
}