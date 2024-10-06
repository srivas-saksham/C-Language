#include<stdio.h>
#define YES printf("%d is an Armstrong Number.", og)
#define NO printf("%d is NOT an Armstrong Number.", og)
void main(){
    printf("Program to Find ArmStrong Number \n");
    int n, og, i, d, a = 0;
    printf("Enter Number: ");
    scanf("%d", &n);
    og = n;
    for(i=1;i<=3;i++){
        d = n%10;
        n /= 10;
        a += d*d*d;
    }
    (a == og ) ? YES : NO;
}