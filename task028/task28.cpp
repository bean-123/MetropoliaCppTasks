// Bitwise palindromes
#include <iostream>
using namespace std;

int main()
{
    // unsigned short int is 16bits (starting from 0, so 15)
    unsigned short int value; // The value that is being tested for bitwise palindrome
    bool ispalindrome = false;

    cout << "value = ";
    cin >> value;

    unsigned short int reversed = 0; // We will store the reversed value in this variable
    for (int i = 0; i < 16; i++)
    {
        int bit = value & (1 << i);      // Get the bit at position i, counting from 0 and beginning from the lowest bit, we use bitwise & to extract the bit
        if (bit)                         // If the bit is set...
            reversed |= (1 << (15 - i)); // ...set the bit at position 15 - i in the reversed value, we use bitwise | to set the bit
    }
    ispalindrome = reversed == value; // Value is a palindrome if its equal to reversed

    if (ispalindrome)
        cout << value << " is a bitwise palindrome" << endl;
    else
        cout << value << " is not a bitwise palindrome" << endl;
    return 0;
}