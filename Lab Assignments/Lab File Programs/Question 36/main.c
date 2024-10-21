// Program to find factorial of a number using function and return its value in the calling function
#include<stdio.h>
int factorial(int n){
    int i;
    for(i=n-1;i>=1;i--){
        n *=i;
    }
    return n;
}
int main(){
    printf("Program to find a factorial of a number.\n");
    int n,fac;
    printf("Enter Number: ");
    scanf("%d", &n);

    fac = factorial(n);
    printf("Fctorial of %d is %d",n,fac);
    return 0;
}
