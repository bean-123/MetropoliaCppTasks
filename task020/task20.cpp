// Finding positive powers of 2

#include <iostream>
using namespace std;

int main()
{
    int n;
    unsigned long long pow = 1; // 2 to the power of 0 is 1

    cout << "Enter n: ";
    cin >> n;

    if (n >= 0 && n <= 63)
    {
        for (int i = 0; i < n; i++)
        {
            pow *= 2;
        }
        cout << "2^" << n << " = " << pow << endl;
    }
    else
    {
        cout << "Please enter a number between 0 and 63." << endl;
    }
    return 0;
}