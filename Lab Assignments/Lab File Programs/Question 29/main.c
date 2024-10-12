//To read an integer and print sum of its digits using while loop.
//Construct and print reverse of n-digit number using do-while loop.
#include<stdio.h>
int main(){
    int n,og,sumN=0,digit,revN=0;
    printf("Enter Number: ");
    scanf("%d", &n);
    og = n;

    while(n != 0){
        digit = n%10;
        n /= 10;
        sumN += digit;
    }
    printf("Sum of Digits of %d is %d\n", og,sumN);

    n = og;
    do{
        digit = n%10;
        n /= 10;
        revN = revN*10 + digit;
    }while(n!=0);
    printf("Reversed Digits of %d is %d", og,revN);
    return 0;
}