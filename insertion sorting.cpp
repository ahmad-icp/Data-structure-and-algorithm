#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nElements before sorting: ";
    for (int j = 0; j < n; j++) {
        cout << arr[j] << " ";
    }
    cout << endl;

    // Insertion sort
    for (int i = 1; i < n; i++) {
        int current = arr[i];
        int previous = i - 1;

        while (previous >= 0 && arr[previous] > current) {
            arr[previous + 1] = arr[previous];
            previous--;
        }
        arr[previous + 1] = current;
    }

    cout << "Elements after sorting: ";
    for (int j = 0; j < n; j++) {
        cout << arr[j] << " ";
    }
    cout << endl;

    return 0;
}
