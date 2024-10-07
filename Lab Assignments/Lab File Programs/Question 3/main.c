// WAP to read two variables of type int and float. Read their values from the user and print the values
#include<stdio.h>
int main(){
    int intNo;
    float floatNo;
    // Scanning Values
    printf("Enter Integer Value: ");
    scanf("%d", &intNo);
    printf("Enter a Float Value: ");
    scanf("%f", &floatNo);
    // Printing Values
    printf("Your Integer Number is : %d\n", intNo);
    printf("Your Float Number till 4 decimal place is: %.4f", floatNo);
    return 0;
}