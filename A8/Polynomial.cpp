// Bruno Stevaux

#include <iostream>
#include <vector>
#include "Polynomial.h"

using namespace std;

Polynomial::Polynomial(double a)
{
    coefficients.push_back(a);
}

Polynomial Polynomial::xToThe(int a)
{
    Polynomial *poly = new Polynomial();

    poly->coefficients.resize(a);
    poly->coefficients.insert(poly->coefficients.begin() + a, 1);

    return *poly;
}

void Polynomial::swap(Polynomial &p)
{
    this->coefficients.swap(p.coefficients);
}

Polynomial &Polynomial::operator+=(const Polynomial &a)
{

    if (a.coefficients.size() > coefficients.size())
        coefficients.resize(a.coefficients.size());

    for (double i = 0; i < a.coefficients.size(); i++)
    {
        coefficients[i] = coefficients[i] + a.coefficients[i];
    }

    return *this;
}

Polynomial &Polynomial::operator*=(double a)
{
    for (double i = 0; i < coefficients.size(); i++)
    {
        coefficients[i] = coefficients[i] * a;
    }
    return *this;
}

void Polynomial::print(ostream &) const
{

    bool left = false;
    if (coefficients.size() == 1)
        cout << coefficients[0] << " ";
    else
    {
        for (int i = coefficients.size() - 1; i >= 0; i--)
        {
            if (coefficients[i] != 0)
            {
                if (left)
                    cout << " + ";
                if (coefficients[i] != 1)
                    cout << coefficients[i];
                if (i > 1)
                    cout << "x^" << i;
                if (i == 1)
                    cout << "x";
                left = true;
            }
        }
    }
    cout << endl;
}

Polynomial &Polynomial::operator=(Polynomial s)
{
    Polynomial *n = new Polynomial();
    n->coefficients = s.coefficients;
    return *n;
}

ostream &operator<<(ostream &out, const Polynomial &c)
{
    c.print(out);
    return out;
}

Polynomial operator+(Polynomial lhsc, const Polynomial &rhs)
{
    lhsc += rhs;
    return lhsc;
}

Polynomial operator*(double d, Polynomial p)
{
    p *= d;
    return p;
}

Polynomial operator*(Polynomial p, double d)
{
    p *= d;
    return p;
}
