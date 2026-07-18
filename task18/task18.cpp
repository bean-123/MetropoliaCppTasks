#include <iostream>
using namespace std;

int main()
{
    int c0;
    int i = 0;

    cout << "c0 = ";
    cin >> c0;

    while (c0 != 1)
    {
        // step counter
        i++;

        if (c0 % 2 == 0)
            // if its even, evaluate a new c0 as c0
            c0 = c0 / 2;
        else
            // otherwise, if its odd evaluate a new c0 as 3*c0 + 1
            c0 = 3 * c0 + 1;
        cout << c0 << endl;
    }
    cout << "steps = " << i << endl;
    return 0;
}