#include <iostream>
#include <vector>
using namespace std;

struct Date
{
    int year;
    int month;
    int day;
};

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

int dayOfYear(Date date)
{

    int totalDays = 0;

    for (int month = 1; month < date.month; month++)
    {
        totalDays += monthLength(date.year, month);
    }

    totalDays += date.day;

    return totalDays;
}

int main(void)
{

    Date d;
    cout << "Enter year, month, day: ";
    cin >> d.year >> d.month >> d.day;
    cout << dayOfYear(d) << endl;
    return 0;
}