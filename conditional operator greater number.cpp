#include <iostream>
using namespace std;

int larger_number, smaller_number, number_1, number_2;

int main ()
{
    cout << "Enter your first number: ";
    cin >> number_1;
    cout << "Enter your second number: ";
    cin >> number_2;

    larger_number = (number_1 > number_2) ? number_1 : number_2;
    smaller_number = (number_1 < number_2) ? number_1 : number_2;

    cout << larger_number << " is larger than " << smaller_number << endl;
    return 0;
}

