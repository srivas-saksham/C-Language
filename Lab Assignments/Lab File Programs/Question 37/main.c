// Program to find factorial of a number using recursion
#include <stdio.h>

int factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    printf("Program to find the Factorial of a number.\n");
    int n, fac;
    printf("Enter Number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    fac = factorial(n);
    printf("Factorial of %d is %d\n", n, fac);
    return 0;
}
