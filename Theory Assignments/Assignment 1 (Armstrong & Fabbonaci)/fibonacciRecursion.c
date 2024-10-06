#include<stdio.h>
void main(){
    printf("Program to Print Fibonacci Numbers \n");
    int n,i=1,a=0,b=1;
    printf("Enter Number of Fibonacci Elements: ");
    scanf("%d", &n);
    printf("\nFibonacci Series: ");
    printf("\n%d\n%d",a,b);
    fibonacci(a,b,n,i);
}
void fibonacci(int a,int b, int n, int i){
    int f;
    f = a+b;
    a = b;
    b = f;
    if(i == (n-1)){
        return;}
    else{
        printf("\n%d", f);
        i++;
        fibonacci(a,b,n,i);
    }
}