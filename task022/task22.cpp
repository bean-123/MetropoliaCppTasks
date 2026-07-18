// Drawing a square
#include <iostream>

using namespace std;

int main(void)
{
    cout << "Enter the size of the square: ";
    int size;
    cin >> size;

    if (size >= 100)
    {
        cout << "Size is too big!" << endl;
        return 1;
    }
    cout << '+';
    for (int i = 0; i < size; i++)
        cout << '-';
    cout << '+' << endl;
    for (int i = 0; i < size; i++)
    {
        cout << '|';
        for (int j = 0; j < size; j++)
            cout << ' ';
        cout << '|' << endl;
    }
    cout << '+';
    for (int i = 0; i < size; i++)
        cout << '-';
    cout << '+' << endl;
    return 0;
}