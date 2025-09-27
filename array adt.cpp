#include <iostream>
using namespace std;
int main(

)
{
int arr[]={1, 2, 3, 4, 5};
cout << "The elements of the array are: ";
cout<<arr.size() << endl;
for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
{
    cout << arr[i] << " ";  





}cout << endl;cout << "The size of the array is: " << sizeof(arr)/sizeof(arr[0]) << endl;
return 0;



}




