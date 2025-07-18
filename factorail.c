#include<stdio.h>
#include<stdlib.h>
factorial(int n)
{
    if (n==0)
    return 1;
else
return n * factorial(n-1);
}



int main()
{
    int number;
    printf("Enter a number: ");scanf("%d", &number);
    printf("factorial of %d is %d\n", number , factorial(number));
    return 0;
}