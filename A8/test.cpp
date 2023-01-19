#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<double> x;

    x.push_back(1);
    x.push_back(2);
    x.push_back(3);
    x.push_back(4);
    x.push_back(5);

    cout << x[0] << endl;
    cout << x[1] << endl;
    cout << x[2] << endl;
    cout << x[3] << endl;
    cout << x[4] << endl;

    x.resize(6);

    cout << x[0] << endl;
    cout << x[1] << endl;
    cout << x[2] << endl;
    cout << x[3] << endl;
    cout << x[4] << endl;
}