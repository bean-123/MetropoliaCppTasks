/// finding the value of π

#include <iostream>
using namespace std;

int main(void)
{
    double pi4 = 0.; // total of all elements
    long n;          // counter
    double div = 1;  // divider

    cout << "Number of iterations? ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 1)
            pi4 -= (1. / div); // odd steps - subtract 1/divider
        else
            pi4 += (1. / div); // even steps - add 1/divider
        div += 2.;             // update divider
    }
    cout.precision(20);
    cout << "Pi = " << (pi4 * 4.) << endl;
    return 0;
}