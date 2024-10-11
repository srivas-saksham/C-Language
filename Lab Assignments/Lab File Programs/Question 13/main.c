//To print circumference and area of circle. Read input from user
#include<stdio.h>
int main(){
    float r,c,a;
    const float pi = 3.14;
    printf("Enter the Radius of the Circle: ");
    scanf("%f", &r);
    c = 2*pi*r;
    a = pi*r*r;

    printf("\nCircumfrence is %.2f\nArea is %.2f",c,a);
    return 0;
}