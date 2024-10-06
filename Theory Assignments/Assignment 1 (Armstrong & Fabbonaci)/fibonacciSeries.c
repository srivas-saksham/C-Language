#include<stdio.h>
void main(){
    printf("Program to Print Fibonacci Numbers \n");
    int n,i,f,a=0,b=1;
    printf("Enter Number of Fibonacci Elements: ");
    scanf("%d", &n);
    printf("\nFibonacci Series: ");
    printf("\n%d\n%d",a,b);
    
    for(i=1;i<=(n-2);i++){
        f = a+b;
        a = b;
        b = f;
        printf("\n%d", f);
    }
}