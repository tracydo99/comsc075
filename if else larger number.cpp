#include <iostream>
using namespace std;

int number_1, number_2;

int main ()
{
    cout << "Enter your first number: ";
    cin >> number_1;
    cout << "Enter your second number: ";
    cin >> number_2;

    if (number_1 > number_2){
        cout << number_1 << " is larger than " << number_2 << endl;
    }
    else {
        cout << number_2 << " is larger than " << number_1 << endl;
    }

    return 0;
}
