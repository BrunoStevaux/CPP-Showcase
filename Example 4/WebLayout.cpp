// Name: Bruno Stevaux.
// Email: 144894s@acadiau.ca

#include "WebLayout.h"
#include <string>
#include <iostream>

using namespace std;

WebLayout::WebLayout()
{

}

void WebLayout::setWidth(int w)
{
    width = w;
}

void WebLayout::setColumns(int n)
{
    col = n;
}

void WebLayout::putHeader() const
{
    cout << "<table border width=" << width << "%>" << endl;
}

void WebLayout::putLineStart() const
{
    cout << " <tr>" << endl;
}

void WebLayout::putElement(const string &e, int w) const
{
    cout << "   <td width=" << w << "%>" << e << "</td>" << endl;
}

void WebLayout::putElement(int n, int w) const
{
    cout << "   <td width=" << w << "%>" << n << "</td>" << endl;

}

void WebLayout::putLineEnd() const
{
    cout << " </tr>" << endl;

}

void WebLayout::putFooter() const
{
    cout << "</table>" << endl;   
}