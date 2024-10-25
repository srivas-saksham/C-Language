//WAP to compute x^n using while statement
#include <stdio.h>
int main() {
    double x;
    int n;
    double result = 1.0;
    int count = 0;

    printf("Enter the base (x): ");
    scanf("%lf", &x); // %lf is long float specifying a double
    printf("Enter the exponent (n): ");
    scanf("%d", &n);
    
    // Handle negative exponent case
    if (n < 0) {
        x = 1.0 / x; // Inverting the base for negative exponent
        n = -n; // Making exponent positive
    }

    while (count < n) {
        result *= x;
        count++;
    }

    printf("%.2f^%d = %.2f\n", x, n, result);
    return 0;
}
