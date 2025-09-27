#include <iostream>
using namespace std;

int main()
{
   const double pi = 3.14159;
   double base_area, radius, length, volume;

   cout << "This program calculates the base area and volume of a cylinder.\n";
   cout << "What is the radius of the cylinder? ";
   cin >> radius;
   cout << "What is the length of the cylinder? ";
   cin >> length;
   base_area = radius * radius * pi;
   volume = base_area * length;
   cout << "The base area of the cylinder is " << base_area << "\n";
   cout << "The volume of the cylinder is " << volume << endl;
   return 0;
}
