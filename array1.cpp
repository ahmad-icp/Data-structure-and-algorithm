#include <iostream>
using namespace std;
int main(){

   int arr[] = {1, 2, 3, 4, 5};
   arr.add(7);
   cout << "Array after adding 7: ";
   for(int i = 0; i < 6; i++) {
       cout << arr[i] << " ";
   }
   cout << endl;
arr.remove(3);
   cout << "Array after removing 3: ";
    for(int i = 0; i < 5; i++) {
         cout << arr[i] << " ";
    }
    cout << endl;
    int searchElement = 4;
    bool found = false;
    for(int i = 0; i < 5; i++) {
        if(arr[i] == searchElement) {
            found = true;
            break;
        }
    }
    if(found) {
        cout << "Element " << searchElement << " found in the array." << endl;
    } else {
        cout << "Element " << searchElement << " not found in the array." << endl;
    }
    arr.add(2,8);
    cout << "Array after adding 8 at index 2: ";
    for(int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
   return 0;
}




















