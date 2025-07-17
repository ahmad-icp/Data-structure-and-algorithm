#include<stdio.h>
int recursion(int n){
    if (n>=0){
      recursion(n-1);
        printf("%d",n);
       
    }
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    recursion(n);
    return 0;
}