// program to define pointer variables for int, char, float.
#include<stdio.h>
int main(){
    int   A = 10,*a;
    char  B = 'H', *b;
    float C = 10.5, *c;

    a = &A;
    b = &B;
    c = &C;

    printf("Value of A: %d\n", A);
    printf("Address of A: %d\n", &A);
    printf("Value of Pointer *a: %d\n", a);
    printf("Address of Pointer *a: %d\n", &a);
    printf("Value @ Address of A: %d\n", *a);
    printf("\n");

    printf("Value of B: %c\n", B);
    printf("Address of B: %d\n", &B);
    printf("Value of Pointer *b: %d\n", b);
    printf("Address of Pointer *b: %d\n", &b);
    printf("Value @ Address of B: %c\n", *b);
    printf("\n");

    printf("Value of C: %d\n", C);
    printf("Address of C: %d\n", &C);
    printf("Value of Pointer *c: %d\n", c);
    printf("Address of Pointer *c: %d\n", &c);
    printf("Value @ Address of C: %d\n", *c);
    printf("\n");

    return 0;
}
