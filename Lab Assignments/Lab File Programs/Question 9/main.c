// To swap two numbers using third variable
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter two Numbers to be Swapped: ");
    scanf("%d %d", &a,&b);
    printf("\n First Number is: %d", a);
    printf("\n Second Number is: %d", b);
    c = a;
    a = b;
    b = c;
    printf("\n Now First Number is: %d", a);
    printf("\n and Second Number is: %d", b);
    return 0;
}