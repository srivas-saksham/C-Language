// To swap two numbers without using third variable
#include<stdio.h>
int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("\n First Number is: %d", a);
    printf("\n Second Number is: %d", b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\n Now First Number is: %d", a);
    printf("\n and Second Number is: %d", b);
    
    return 0;
}