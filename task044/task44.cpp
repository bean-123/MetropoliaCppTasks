#include <iostream>
#include <vector>
using namespace std;

bool isLeap(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int monthLength(int year, int month)
{
    if (month <= 0 || month > 12)
        return 0;

    vector<int> days = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31};

    if (isLeap(year) && month == 2)
    {
        days[1]++;
    }

    month--; // Adjust month to 0-based index for the vector
    return days[month];
}

int main(void)
{

    for (int yr = 2000; yr < 2002; yr++)
    {
        for (int mo = 1; mo <= 12; mo++)
            cout << monthLength(yr, mo) << " ";
        cout << endl;
    }
    return 0;
}