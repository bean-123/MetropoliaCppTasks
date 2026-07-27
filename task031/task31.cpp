// banknotes task

#include <iostream>
using namespace std;

int main()
{
    int money;
    int banknotes[] = {50, 20, 10, 5, 1}; // Notes: 0 = 50, 1 = 20, 2 = 10, 3 = 5, 4 = 1

    cout << "Give a price: ";
    cin >> money;

    for (int i = 0; i < 5; i++)       // Loops thru banknotes to check if they fit in the input, starting from the biggest note, and when it wont fit then we move to lower notes
        while (money >= banknotes[i]) // If the money is still bigger thant he compared note..
        {
            cout << banknotes[i] << ' '; // .. we should add banknote to the pool..
            money -= banknotes[i];       // .. and reduce the amount of our money with the note we used, loop continues
        }
    cout << endl;
    return 0;
}