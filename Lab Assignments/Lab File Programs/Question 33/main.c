// WAP to implement a function printline(int n, char ch) to print 'ch' n times
#include<stdio.h>
void printLine(int n, char ch){
    for(int i = 0;i < n;i++){
        printf("%c ", ch);
    }
}
int main(){
    printf("Program to Loop Printing a Character\n");
    int n;
    char ch;
    printf("Enter the String: ");
    scanf(" %c", &ch);
    printf("Enter Number of times to Print: ");
    scanf("%d", &n);
    printLine(n,ch);
}