//WAP to read two integers from user and print both the numbers. Find their sum and assign it to third variable
#include<stdio.h>
int main(){
    int no1,no2;
    int sum;
    printf("Enter Two Integer Value: ");
    scanf("%d %d", &no1, &no2);

    printf("The Numbers are %d & %d.\n", no1, no2);
    sum = no1 + no2;
    printf("The Sum of %d + %d is %d", no1,no2,sum);
    return 0;
}