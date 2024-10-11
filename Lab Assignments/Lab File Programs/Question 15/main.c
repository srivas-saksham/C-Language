//Mathematical operation on character to get other character
#include<stdio.h>
int main(){
    char ch,ch2;
    int a;
    printf("Enter Letter: ");
    scanf("%c", &ch);
    printf("Enter Increment Number: ");
    scanf("%d", &a);
    ch2 = ch+a;

    printf("\nASCII Value of %c is %d",ch,ch);
    printf("\n%d+%d is %d", ch,a, ch+a);
    printf("\nASCII Letter of %d is %c", ch2,ch2);
    return 0;
}