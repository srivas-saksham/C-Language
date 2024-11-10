//Program to find length of string using Pointers
#include<stdio.h>
int main(){
    int len,i,aLen=0;
    char arr[50];
    char *ptr = arr;
    printf("Enter String: ");
    scanf("%s", arr);

    for(i=0;*ptr != '\0';i++){
        aLen++;
        ptr++;
    }

    printf("Length of Array is %d", aLen);
    return 0;
}