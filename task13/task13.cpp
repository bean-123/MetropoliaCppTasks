#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter a year: ";
    cin >> year;

    int month;
    cout << "Enter a month (1-12): ";
    cin >> month;

    int day;
    cout << "Enter a day (1-31): ";
    cin >> day;

    month = month - 2;
    if (month <= 0)
    {
        month += 12;
        year--;
    }
    month = month * 83 / 32;
    int dayOfYear = month + day + year * 365 + year / 4 - year / 100 + year / 400;
    month = (dayOfYear % 7 + 7) % 7;

    cout << "Day of the week: ";
    switch (month)
    {
    case 0:
        cout << "Sunday";
        break;
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    }
    return 0;
}