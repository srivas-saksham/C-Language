//WAP to read two integers and an operator (+,-,*,/,%). Use switch-case statement to get result of operator on two integers.
#include <stdio.h>
int main(){
    int num1, num2, result;
    char operator;

    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator); //The Space before %c to ignore any newline character in buffer.
    
    switch (operator){
        case '+':
            result = num1 + num2;
            printf("Result: %d + %d = %d\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %d - %d = %d\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %d * %d = %d\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %d / %d = %d\n", num1, num2, result);
            } 
            else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                result = num1 % num2;
                printf("Result: %d %% %d = %d\n", num1, num2, result);
            } 
            else {
                printf("Error: Modulus by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator.\n");
            break;
    }
    return 0;
}
