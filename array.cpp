#include <stdio.h>
#include <iostream>
using namespace std;
int siz;
int reverse(int arr[], int s)
{
int st =0 ,end =s-1;
while(st<end){
    swap(arr[st],arr[end]);
    st++;
    end--;
for(int i=0;i<s;i++)
cout<<arr[i]<<" ";   
}   

}
int main() {
    int s=5;
    int arr[] = {1, 2, 3, 4, 5};
   
    int *ptr = arr;  // Pointer pointing to the first element of the array

    printf("Array elements using pointer:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));  // Accessing array elements via pointer arithmetic
    }
    printf("\n");
cout<<reverse( arr, s);

return 0;
}