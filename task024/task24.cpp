// Fibonacci sequence
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Please enter a positive integer." << endl;
    }
    else if (n == 1 || n == 2)
    {
        cout << 1;
    }
    else
    {
        long long first = 1;
        long long second = 1;

        for (int i = 3; i <= n; i++)
        {
            long long next = first + second;
            first = second;
            second = next;
        }
        cout << second;
    }
    return 0;
}