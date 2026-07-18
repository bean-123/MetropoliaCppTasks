/* finding the largest of three numbers */

#include <iostream>
using namespace std;

int main(void)
{
    /* the three numbers */
    int number1, number2, number3;

    /* we will save the larger number here */
    int max;

    /* read three numbers */
    cout << "Enter number 1: ";
    cin >> number1;
    cout << "Enter number 2: ";
    cin >> number2;
    cout << "Enter number 3: ";
    cin >> number3;

    /* we temporarily assume that the former number is the larger one */
    /* we will check it soon */
    max = number1;

    /* we check if the second value is the largest */
    if (number2 > max)
        max = number2;

    /* we check if the third value is the largest */
    if (number3 > max)
        max = number3;

    /* we print the result */
    cout << "The largest number is " << max << endl;

    /* we finish the program successfully */
    return 0;
}