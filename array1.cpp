#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1, 2, 3, 4, 5}; // capacity = 10
    int size = 5; // current number of elements

    // Add 7 at the end
    arr[size] = 7;
    size++;
    cout << "Array after adding 7: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Remove element with value 3
    for (int i = 0; i < size; i++) {
        if (arr[i] == 3) {
            for (int j = i; j < size - 1; j++) {
                arr[j] = arr[j + 1]; // shift left
            }
            size--;
            break;
        }
    }
    cout << "Array after removing 3: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Search for element
    int searchElement = 4;
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (arr[i] == searchElement) {
            found = true;
            break;
        }
    }
    if (found) {
        cout << "Element " << searchElement << " found in the array." << endl;
    } else {
        cout << "Element " << searchElement << " not found in the array." << endl;
    }

    // Insert 8 at index 2
    int index = 2;
    for (int i = size; i > index; i--) {
        arr[i] = arr[i - 1]; // shift right
    }
    arr[index] = 8;
    size++;

    cout << "Array after adding 8 at index 2: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
