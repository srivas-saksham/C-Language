//To print sum of first n odd natural numbers
#include<stdio.h>
int main(){
    int i,n,sumN=0;
    printf("Enter Number of Elements: ");
    scanf("%d", &n);
    for(i=1;i<=n*2;i+=2)
        sumN += i;
    printf("Sum of first %d odd Numbers is %d", n, sumN);
    return 0;
}