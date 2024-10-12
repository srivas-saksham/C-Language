/*To find grades on the basis of marks, using if-else and relational operators
 Average marks Grade
 80 to 100 Honours
 60 to 79 First Division
 50 to 59 Second Division
 40 to 49 Third Division
 0 to 39 Fail*/
#include <stdio.h>
int main() {
    int marks;
    
    printf("Enter the Average Marks (0 - 100): ");
    scanf("%d", &marks);
    
    if (marks >= 80 && marks <= 100) {
        printf("Grade: Honours\n");
    }
    else if (marks >= 60 && marks <= 79) {
        printf("Grade: First Division\n");
    }
    else if (marks >= 50 && marks <= 59) {
        printf("Grade: Second Division\n");
    }
    else if (marks >= 40 && marks <= 49) {
        printf("Grade: Third Division\n");
    }
    else if (marks >= 0 && marks <= 39) {
        printf("Grade: Fail\n");
    }
    else {
        printf("Invalid marks. Please enter a value between 0 and 100.\n");
    }

    return 0;
}
