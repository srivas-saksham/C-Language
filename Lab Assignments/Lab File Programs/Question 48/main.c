/*Program to read character array using getchar() in do-while loop and print it.
Find its length and number of vowels (Case-sensitive)*/
#include<stdio.h>
int main() {
    char str[100],ch;
    int length = 0,vowels = 0,i = 0;
    printf("Enter a string (end input with a newline): ");

    do {
        ch = getchar();
        str[i++] = ch;
    }while(ch != '\n' && i < 100);
    str[i-1] = '\0';

    // Loop to calculate length and number of vowels
    for(i = 0; str[i] != '\0'; i++) {
        length++;
        if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||
           str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            vowels++;
        }
    }

    printf("You entered: %s\n", str);
    printf("Length of the string: %d\n", length);
    printf("Number of vowels: %d\n", vowels);

    return 0;
}
