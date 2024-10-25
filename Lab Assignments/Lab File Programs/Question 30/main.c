//To determine if given number is prime or composite
#include<stdio.h>
int main(){
    printf("Program to Find Prime Numbers \n");
    int n, i, j, p;
    printf("Enter Number to Check: ");
    scanf("%d", &n);
    if(n == 2){
        printf("2 is a Prime Number.");
        return 0;
    }
    for(i=2; i<=n;i++){
        for(j=2;j<i;j++){
            if(i%j != 0){
                p = i;
            }
            else{
                p = 0;
                break;
            }
        }
    }
    if(p != 0){
        printf("%d is a Prime Number.",n);
    }
    else{
        printf("%d is a Composite Number.",n);
    }
    return 0;
}