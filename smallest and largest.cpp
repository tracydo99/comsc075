#include <iostream>
using namespace std;

int value [10];
int largest_value = 0;
int smallest_value = 0;
int test_value = 0;

int main ()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter your #" << i + 1 << " value: ";
        cin >> value[i];
    }
    smallest_value = value[0];
    largest_value = value[0];

    for (int i = 0; i < 10; i++)
    {
        test_value = value [i];

        if (test_value > largest_value)
            largest_value = test_value;

        if (test_value < smallest_value)
            smallest_value = test_value;

    }
    cout << "The largest value is " << largest_value << ". ";
    cout << "The smallest value is " << smallest_value << ".";

return 0;
}
