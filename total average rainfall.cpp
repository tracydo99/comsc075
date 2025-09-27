#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int MONTHS = 12;
    string months[MONTHS] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int LoopVariable = 0;
    double input_rainfall[MONTHS];
    double total_rainfall = 0;
    double average_rainfall = 0;
    double highest_rainfall = 0;
    string highest_month;
    double lowest_rainfall = 0;
    string lowest_month;

    for (int LoopVariable = 0; LoopVariable < MONTHS; LoopVariable++)
    {
        cout << "Enter the rainfall for " << months[LoopVariable] << ": ";
        cin >> input_rainfall[LoopVariable];
        total_rainfall += input_rainfall[LoopVariable];

        while (input_rainfall[LoopVariable] < 0)
        {
            cout << "Error! Please enter a valid number." << endl;
            cin >> input_rainfall[LoopVariable];
        }
    }

    average_rainfall = total_rainfall/12;

    highest_rainfall = input_rainfall[0];
    for (int LoopVariable = 0; LoopVariable < MONTHS; LoopVariable++)
    {
        if (input_rainfall[LoopVariable] >= highest_rainfall)
        {
            highest_month = months[LoopVariable];
            highest_rainfall = input_rainfall[LoopVariable];
        }
    }

    lowest_rainfall = input_rainfall[0];
    for (int LoopVariable = 0; LoopVariable < MONTHS; LoopVariable++)
    {
        if (input_rainfall[LoopVariable] <= lowest_rainfall)
        {
            lowest_month = months[LoopVariable];
            lowest_rainfall = input_rainfall[LoopVariable];
        }
    }

    cout << "Total rainfall: " << total_rainfall << " inches" << endl;
    cout << "Average rainfall: " << average_rainfall << " inches" << endl;
    cout << "Highest rainfall: " << highest_rainfall << " inches in " << highest_month << endl;
    cout << "Lowest rainfall : " << lowest_rainfall << " inches in " << lowest_month << endl;

return 0;
}
