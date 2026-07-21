// Counting bits
#include <iostream>
using namespace std;

int main()
{
    unsigned long value; // The value that is being tested for set bits
    int count = 0;

    cout << "Enter a value: ";
    cin >> value;

    while (value != 0) // While there are still bits to check
    {
        if ((value & 1) == 1) // If the lowest bit of value is equal to 1
        {
            count++;
        }
        value >>= 1; // Shift value to right to check another bit, already checked bit is discarded
    }
    cout << "Number of set bits: " << count << endl;
    return 0;
}