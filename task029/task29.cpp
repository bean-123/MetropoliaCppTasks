#include <iostream>
using namespace std;
int main()
{
    bool exit = false; // Should we end the task
    float a, b;        // Arguments for the operation
    int choice;        // The operation

    // Repeated untill user inputs 0
    while (!exit)
    {
        // show the menu
        cout << "MENU:" << endl;
        cout << "0 - exit" << endl;
        cout << "1 - addition" << endl;
        cout << "2 - subtraction" << endl;
        cout << "3 - multiplication" << endl;
        cout << "4 - division" << endl;
        cout << "Your choice?: " << endl;

        cin >> choice; // Ask number

        if (choice >= 1 && choice <= 4)
        {
            cout << "A = ";
            cin >> a;
            cout << "B = ";
            cin >> b;
        }

        // Counting
        switch (choice)
        {
        case 0:
            exit = true;
            break;
        case 1:
            cout << "A + B = " << a + b << endl;
            break;
        case 2:
            cout << "A - B = " << a - b << endl;
            break;
        case 3:
            cout << "A * B = " << a * b << endl;
            break;
        case 4:
            if (b == 0.0)
                cout << "I cannot divide by 0 - sorry" << endl;
            else
                cout << "A / B = " << a / b << endl;
            break;
        default:
            cout << "I dont like the number " << choice << ", pelase choose another!" << endl;
        }
    }
}