//Program to show the use of string function: strcpy(), strcat(), strcmp(), strlen().
#include<stdio.h>
#include<string.h>  // Include the string.h library for string functions

int main() {
    char str1[50], str2[50], str3[50];

    // strcpy() - Copies the contents of one string into another
    printf("Enter the first string: ");
    gets(str1);
    strcpy(str3, str1);
    printf("After copying, str3 = %s\n", str3);

    // strcat() - Concatenates (appends) one string at the end of another
    printf("Enter the second string: ");
    gets(str2);
    strcat(str1, str2);
    printf("After concatenation, str1 = %s\n", str1);

    // strcmp() - Compares two strings lexicographically
    if(strcmp(str1, str3) == 0)
        printf("str1 and str3 are the same.\n");
    else
        printf("str1 and str3 are different.\n");

    // strlen() - Finds the length of a string
    printf("Length of str1: %lu\n", strlen(str1));
    printf("Length of str2: %lu\n", strlen(str2));
    printf("Length of str3: %lu\n", strlen(str3));
    return 0;
}