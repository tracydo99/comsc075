#include <iostream>
using namespace std;

char month_1[9], month_2[9], month_3[9];
double average_rainfall, rainfall_1, rainfall_2, rainfall_3;

int main ()
{
    cout << "This program calculates the average rainfall for three months. \n";
    cout << "Enter the first month: ";
    cin >> month_1;
    cout << "Enter the rainfall (in inches) for the first month: ";
    cin >> rainfall_1;
    cout << "Enter the second month: ";
    cin >> month_2;
    cout << "Enter the rainfall (in inches) for the second month: ";
    cin >> rainfall_2;
    cout << "Enter the third month: ";
    cin >> month_3;
    cout << "Enter the rainfall (in inches) for the third month: ";
    cin >> rainfall_3;

    average_rainfall = (rainfall_1 + rainfall_2 + rainfall_3)/3;

    cout << "The average rainfall for " << month_1 << ", " << month_2 << ", and " << month_3 << " is " << average_rainfall << " inches. " << endl;
    return 0;
}
