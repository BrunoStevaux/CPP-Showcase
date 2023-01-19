#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include <vector>
#include <iostream>
using namespace std;

class Polynomial
{
private:
    vector<double> coefficients;

public:
    Polynomial(double = 0.0);
    static Polynomial xToThe(int);
    Polynomial &operator=(Polynomial p);
    void swap(Polynomial &p);

    Polynomial &operator+=(const Polynomial &);
    Polynomial &operator*=(double);

    void print(ostream &) const;
};

ostream &operator<<(ostream &out, const Polynomial &c);
Polynomial operator+(Polynomial lhsc, const Polynomial &rhs);
Polynomial operator*(double d, Polynomial p);
Polynomial operator*(Polynomial p, double d);

#endif
