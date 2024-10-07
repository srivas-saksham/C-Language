//WAP to read two floating type numbers from user. Calculate their sum, difference, product and average
#include<stdio.h>
int main(){
    float no1,no2;
    float sum,diff,prod,avg;
    printf("Enter Two Float Numbers: ");
    scanf("%f %f", &no1, &no2);

    sum = no1+no2;
    diff = no1-no2;
    prod = no1*no2;
    avg = sum/2;
    printf("Sum is %.4f\n", sum);
    printf("Difference is %.4f\n", diff);
    printf("Product is %.4f\n", prod);
    printf("Average is %.4f\n", avg);

    return 0;
}