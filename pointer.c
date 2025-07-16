#include <stdio.h>

int main() {
    int a = 5;
    int *p = &a;  // p points to the address of a

    printf("Value of a: %d\n", a);               // Prints value: 5
    printf("Address of a: %p\n", (void*)&a);     // Prints address in memory (hex)
    *p =34;
    printf("Value of a after change through pointer: %d\n", a); // Prints value: 34
    return 0;
}
