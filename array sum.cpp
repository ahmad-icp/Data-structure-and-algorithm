#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter members in array: ";
    cin >> size;

    int arr[size]; 
    for (int j = 0; j < size; j++)
        cin >> arr[j];

    int sum = 0;
    for (int k = 0; k < size; k++) {
        sum += arr[k];
    }

    cout << "Sum = " << sum;
    return 0;
}
