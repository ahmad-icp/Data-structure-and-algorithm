#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 79, 5};
    for(int i = 0; i < 5; i++) {
        printf("%d \n ", arr[i]);
    }
    printf("Array size: %d\n", sizeof(arr));
    return 0;
}
// This code initializes an array with 5 integers and prints them to the console.
// The output will be: 1  2  3  79  5  20