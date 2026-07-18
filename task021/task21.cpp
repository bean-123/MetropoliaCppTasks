// Finding powers of 2

#include <iostream>
using namespace std;

int main()
{
    int n;
    double pow = 1; // 2 to the power of 0 is 1

    cout << "Enter n: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        pow /= 2; // evaluate next negative power of 2
    }
    cout.precision(20);
    cout << pow << endl; // print the result with 20 digits of precision

    return 0;
}