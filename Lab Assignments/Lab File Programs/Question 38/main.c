//Program to display usage of static variables
#include <stdio.h>

void countCalls() {
    static int count = 0;  // Static variable to keep track of function calls
    count++;                // Increment the count
    printf("Function called %d times\n", count);
}

int main() {
    printf("Demonstrating the usage of static variables:\n");
    printf("Value of Static variables retain between function calls.\n");

    // Call the function multiple times
    for (int i = 0; i < 5; i++) {
        countCalls();
    }

    return 0;
}
