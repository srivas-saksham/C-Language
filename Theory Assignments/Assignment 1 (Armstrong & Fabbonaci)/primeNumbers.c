#include<stdio.h>
void main(){
    printf("Program to Find Prime Numbers \n");
    int n, i, j, p;
    printf("Enter the number up to which you want to find prime numbers: ");
    scanf("%d", &n);
    for(i=2; i<=n;i++){
        for(j=2;j<i;j++){
            if(i%j != 0){
                p = i;}
            else{
                p = 0;
                break ;}
        }
        if(p != 0){
            printf("\nPrime Number is %d",p);
        }
    }
}