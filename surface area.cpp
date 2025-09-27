#include <iostream>
using namespace std;

int main()
{
   const double pi = 3.14159;
   double surface_area, area, radius, length, volume;

   cout << "This program calculates the base area and volume of a cylinder.\n";
   cout << "What is the radius of the cylinder? ";
   cin >> radius;
   cout << "What is the length of the cylinder? ";
   cin >> length;
   area = radius * radius * pi;
   volume = area * length;
   surface_area = 2 * pi * radius * (radius + length);
   cout << "The area of the cylinder is " << surface_area << "\n";
   cout << "The volume of the cylinder is " << volume << endl;
   return 0;
}
