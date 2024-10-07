// WAP to study variables and constants of int and float data types
#include <stdio.h>
int main() {
    // Declaring and initializing integer variables
    int intVar1 = 10;
    int intVar2 = 20;

    // Declaring and initializing float variables
    float floatVar1 = 12.5;
    float floatVar2 = 30.75;

    // Declaring and initializing constants using 'const' keyword
    const int intConst = 100;    // Integer constant i.e cannot be updated
    const float floatConst = 50.25; // Float constant i.e cannot be updated

    // Printing values of integer variables
    printf("Integer Variable 1: %d\n", intVar1);
    printf("Integer Variable 2: %d\n", intVar2);

    // Printing values of float variables
    printf("Float Variable 1: %.2f\n", floatVar1);  // .2f to print 2 decimal places
    printf("Float Variable 2: %.2f\n", floatVar2);

    // Printing values of integer and float constants
    printf("Integer Constant: %d\n", intConst);
    printf("Float Constant: %.2f\n", floatConst);

    return 0;
}
