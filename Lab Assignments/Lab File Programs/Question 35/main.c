// Program to Swap two numbers using functions (call by reference)
#include<stdio.h>
int swap(int *a, int *b){
    int c;
    c = *a;
    *a = *b;
    *b = c;
}
int main(){
    int a,b;
    printf("Enter A: ");
    scanf("%d", &a);
    printf("Enter B: ");
    scanf("%d", &b);

    swap(&a, &b);

    printf("Value of A after Swap: %d\n", a);
    printf("Value of B after Swap: %d", b);

    return 0;
}
