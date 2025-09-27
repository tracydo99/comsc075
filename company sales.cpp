#include <iostream>
using namespace std;

double getSales();
void findHighest(double, double, double, double);


int main()
{
	double NE, SE, NW, SW;

	cout << "Northeast ";
	NE = getSales();

	cout << "Southeast ";
	SE = getSales();

	cout << "Northwest ";
	NW = getSales();

	cout << "Southwest ";
	SW = getSales();

	findHighest(NE, SE, NW, SW);
	return 0;
}

double getSales()
{
	 double Sales;

	 cout << "quarterly sales figure: ";
	 cin >> Sales;

	 if(Sales < 0)
		{
		cout << "Please enter a valid number." << endl;
		exit (0);
		}
    return Sales;
}

void findHighest(double NE, double SE, double NW, double SW)
{
	double Highest;

 	cout << "The highest grossing division is ";

	if (NE > SE && NE > NW && NE > SW)
	{
		Highest = NE;
		cout << "Northeast ";
	}
	else if (SE > NE && SE > NW && SE > SW)
	{
		Highest = SE;
		cout << "Southeast ";
	}
	else if (NW > SE && NW > NE && NW > SW)
	{
		Highest = NW;
		cout << "Northwest ";
	}
	else
	{
		Highest = SW;
		cout << "Southwest ";
	}
	cout << "with $" << Highest << " in sales.";
}
