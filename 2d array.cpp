#include<iostream>
using namespace std;

// Change return type to bool and use reference parameters for position
bool search(int arr[4][4], int target, int &row, int &col)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == target)
            {
                row = i;
                col = j;
                return true;
            }
        }
    }
    return false; // Return false if target is not found
}

int main()
{
    int arr[4][4];
    int target;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Enter element at position (" << i << "," << j << "): ";
            cin >> arr[i][j];
        }
    }

    cout << "Enter target element to search: ";
    cin >> target;

    int row, col;
    if (search(arr, target, row, col)) {
        cout << "Element found at position: (" << row << "," << col << ")" << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}