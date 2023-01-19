// Bruno Stevaux

#include "Polynomial.h"
#include <iostream>
using namespace std;

int main()
{
    Polynomial zero;
    Polynomial two(2.0);
    Polynomial x = Polynomial::xToThe(1);
    Polynomial xSquared = Polynomial::xToThe(2);

    Polynomial f = 3 * xSquared;
    Polynomial g = x * 5.2;
    Polynomial h = f + g;
    Polynomial p = h + two;

    cout << "0:               " << zero << endl
         << "2:               " << two << endl
         << "x:               " << x << endl
         << "x^2:             " << xSquared << endl
         << "3x^2:            " << f << endl
         << "5.2x:            " << g << endl
         << "3x^2 + 5.2x:     " << h << endl
         << "3x^2 + 5.2x + 2: " << p << endl;

    f *= -2;
    g += f;
    h *= 9;
    p += h + 2 * Polynomial::xToThe(5) + 1;

    cout << "-6x^2:                  " << f << endl
         << "-6x^2 + 5.2x:           " << g << endl
         << "27x^2 + 46.8x:          " << h << endl
         << "2x^5 + 30x^2 + 52x + 3: " << p << endl;

    Polynomial a(1);
    Polynomial b(17);

    cout << a << " " << b << endl;
    a.swap(b);
    cout << a << " " << b << endl;
}
