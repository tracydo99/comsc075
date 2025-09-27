#include <iostream>
using namespace std;

int main()
{
    int integer;

    cout << "Enter a positive integer no greater than 15: ";
    cin >> integer;
    if (integer < 1 || integer > 15)
        {
        cout << "Error. Try again! \n";
    }

    else if (integer > 1 || integer < 15)
        for (int i=0; i <integer; i++)
    {
        for (int j=0; j <integer; j++)
        {
            cout << 'X';
        }
        cout << endl;
    }
    system("pause");
    return 0;
}
