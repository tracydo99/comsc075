#include <iostream>

using namespace std;

int *reverse_array(int[], int);
void display_array(int[], int);

int main()
{
     int size, arr[99];

     cout << "Enter the size of the array: ";
     cin >> size;

     for (int i = 0; i < size; i++)
     {
          cout << "Enter the #" << i + 1 << " value: ";
          cin >> arr[i];
     }

     int *copy_array = reverse_array(arr, size);
     cout << "Reversed array: " << endl;
     display_array(copy_array, size);

     return 0;
}

int *reverse_array(int arr[], int n)
{
     int i, j;
     int *temp_array = new int[n];

     for (i = 0; i < n; i++)
        temp_array[i] = arr[n - i - 1];

     return temp_array;
}

void display_array(int arr[], int n)
{
     int i;

     for (i = 0; i < n; i++)
     {
          cout << arr[i];

          if (i != n - 1)
          {
               cout << ",";
          }

     }
}
