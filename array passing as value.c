#include <stdio.h>

void fun(int a[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]); // Print each element of the array
    }
}

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int n = 5;
    fun(a, n);
    return 0;
}
