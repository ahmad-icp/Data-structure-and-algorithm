#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    if (!(cin >> n) || n <= 0) {
        cerr << "Invalid number of elements\n";
        return 1;
    }

    vector<int> arr(n);
    cout << "Enter the elements (separated by space or newline):\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Before: ";
    for (int j = 0; j < n; ++j) cout << arr[j] << (j + 1 == n ? '\n' : ' ');

    // Selection sort
    for (int i = 0; i < n - 1; ++i)
    {
        int small = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[j] < arr[small]) small = j;
        }
        if (small != i) swap(arr[i], arr[small]);
    }

    cout << "After:  ";
    for (int j = 0; j < n; ++j) cout << arr[j] << (j + 1 == n ? '\n' : ' ');

    return 0;
}