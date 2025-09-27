#include <iostream>
#include <iomanip>
using namespace std;

double calculateRetail, wholesale_cost, markup_percentage;

int main()
{
    cout << "This program calculates the retail price from the wholesale cost and markup percentage. \n";

    cout << "What is the item's wholesale cost? ";
    cin >> wholesale_cost;

    cout << "What is the item's markup percentage? ";
    cin >> markup_percentage;

    calculateRetail = wholesale_cost * (1 + markup_percentage/100);

    cout << "The retail price of this item is $" << setprecision(4) << calculateRetail << endl;
    return 0;
}
