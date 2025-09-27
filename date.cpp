#include <iostream>

using namespace std;

class Date
{
private:
    int month;
    int day;
    int year;

public:
    void Month(int);
    void Day(int);
    void Year(int);
    void format1() const;
    void format2() const;
    void format3() const;
};

int main()
{
Date input;
int input_month;
int input_day;
int input_year;

    cout << "Enter the month: ";
    cin >> input_month;
    input.Month(input_month);

    cout << "Enter the day: ";
    cin >> input_day;
    input.Day(input_day);

    cout << "Enter the year: ";
    cin >> input_year;
    input.Year(input_year);

    input.format1();
    input.format2();
    input.format3();

    return 0;
}

void Date::Month(int m)
{
    while ( (m < 1) || (m > 12) )
    {
        cout << "Error. Please enter a valid number for the month.";
        cin >> m;
    }
    month = m;
}

void Date::Day (int d)
{
    while ( (d < 1) || (d > 31) )
    {
        cout << "Error. Please enter a valid number for the day.";
        cin >> d;
    }
    day = d;
}

void Date::Year (int y)
{
    year = y;
}

void Date::format1() const
{
    cout << month << "/" << day << "/" << year << endl;
}

void Date::format2() const
{
    switch (month)
    {
        case 1: cout << "January";
        break;

        case 2: cout << "February";
        break;

        case 3: cout << "March";
        break;

        case 4: cout << "April";
        break;

        case 5: cout << "May";
        break;

        case 6: cout << "June";
        break;

        case 7: cout << "July";
        break;

        case 8: cout << "August";
        break;

        case 9: cout << "September";
        break;

        case 10: cout << "October";
        break;

        case 11: cout << "November";
        break;

        case 12: cout << "December";
        break;
    }
    cout << " " << day << ", " << year << endl;
}

void Date::format3() const
{
    cout << day << " ";

    switch (month)
    {
        case 1: cout << "January";
        break;

        case 2: cout << "February";
        break;

        case 3: cout << "March";
        break;

        case 4: cout << "April";
        break;

        case 5: cout << "May";
        break;

        case 6: cout << "June";
        break;

        case 7: cout << "July";
        break;

        case 8: cout << "August";
        break;

        case 9: cout << "September";
        break;

        case 10: cout << "October";
        break;

        case 11: cout << "November";
        break;

        case 12: cout << "December";
        break;
    }
    cout << " " << year << endl;
}
