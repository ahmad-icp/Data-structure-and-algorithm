#include<stdio.h>
int sumn(int n)
{ if (n==0)
return 0;
int sum=sumn(n-1) + n;
return sum;
}
int main()
{ int n;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  printf("Sum of first %d natural numbers is: %d\n", n, sumn(n));
  return 0;
}