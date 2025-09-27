#include <iostream>
using namespace std;

void sort_score (double *array, int size);
void average_score (double *array, int size);

int main()
{
    double *score = nullptr, average;
    int size_score = 0, count;

    cout << "# of test scores: ";
    cin >> size_score;

score = new double (size_score);

cout << "Enter the score for each test. \n";
for (count = 0; count < size_score; count++)
{
    cout << "Test #" << (count + 1) << ": ";
    cin >> *(score + count);
}

cout << "Test scores in ascending order: \n";
sort_score (score, size_score);
cout << "Average test score: ";
average_score (score, size_score);

delete[] score;
score = nullptr;

return 0;
}

void sort_score (double *array, int size)
{
    int startScan, minIndex;
    double minValue;
    for (startScan = 0; startScan < (size - 1); startScan++)
    {
        minIndex = startScan;
        minValue = *(array + startScan);

        for (int index = startScan + 1; index < size; index++)
        {
            if (*(array + index) < minValue)
            {
                minValue = *(array + index);
                minIndex = index;
            }
        }
        *(array + minIndex) = *(array + startScan);
        *(array + startScan) = minValue;
    }
    for (int index = 0; index < size; index++)
    {
        cout << "Score #" << index + 1 << ": ";
        cout << *(array + index) << endl;
    }
}

void average_score (double *array, int size)
{
    double total = 0, average = 0;
    int count = 0;

    for (count = 0; count < size; count++)
    {
        total += *(array + count);
    }

    average = total/size;
    cout << average;
}
