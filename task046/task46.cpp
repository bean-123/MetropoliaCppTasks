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

    month--;
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

int daysBetween(Date d1, Date d2)
{
    if (d1.year > d2.year ||
        (d1.year == d2.year && d1.month > d2.month) ||
        (d1.year == d2.year && d1.month == d2.month && d1.day > d2.day))
    {
        return -1;
    }

    if (d1.year == d2.year)
    {
        return dayOfYear(d2) - dayOfYear(d1);
    }

    int totalDays = (isLeap(d1.year) ? 366 : 365) - dayOfYear(d1);

    for (int year = d1.year + 1; year < d2.year; year++)
    {
        totalDays += isLeap(year) ? 366 : 365;
    }

    totalDays += dayOfYear(d2);

    return totalDays;
}

int main(void)
{
    Date since, to;

    cout << "Enter first date (y m d): ";
    cin >> since.year >> since.month >> since.day;

    cout << "Enter second date (y m d): ";
    cin >> to.year >> to.month >> to.day;

    cout << daysBetween(since, to) << endl;

    return 0;
}
