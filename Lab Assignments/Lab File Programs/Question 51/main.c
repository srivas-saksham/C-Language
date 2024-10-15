//Program to copy a string to another string (without inbuilt function.)
#include<stdio.h>
int main(){
    char str[50], strCopy[50];
    int i;
    printf("Enter String: ");
    scanf("%s", str);
    for(i=0;str[i]!='\0';i++){
        strCopy[i] = str[i];
    }
    printf("The Copied String is %s.\n", strCopy);
    return 0;
}