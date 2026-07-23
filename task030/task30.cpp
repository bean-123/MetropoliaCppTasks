// Simple vector manipulations
#include <iostream>
using namespace std;

int main()
{
    int vector1[7] = {4, 7, 2, 8, 1, 3, 0};
    int vector2[7];

    // Move the last element to the front
    vector2[0] = vector1[6];

    // Shift all other elements one position to the right
    for (int i = 1; i < 7; i++)
    {
        vector2[i] = vector1[i - 1];
    }

    // Print the rotated vector
    for (int i = 0; i < 7; i++)
    {
        cout << vector2[i] << " ";
    }

    cout << endl;

    return 0;
}