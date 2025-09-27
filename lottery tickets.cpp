#include <iostream>

using namespace std;

int search (int[], int, int);

int main()
{
    const int lucky_combination = 10;
    int ticket[lucky_combination] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
    int winning_number, search_tickets;

    cout << "Enter this week's winning 5-digit number: ";
    cin >> winning_number;

    search_tickets = search(ticket, lucky_combination, winning_number);

    if (search_tickets == -1)
        cout << "None of your tickets are a winner this week.";
    else
    {
        cout << "You have the winning ticket this week!";
    }
    return 0;
}

int search (int list[], int size, int value)
{
    int index = 0;
    int position = -1;

    while (index < size)
    {
        if (list[index] == value)
        {
            position = index;
        }
        index++;
    }
    return position;
}
