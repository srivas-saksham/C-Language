//Program to find reverse of a string (without inbuilt function).
#include<stdio.h>
int main(){
    char str[100],strRev[100],ch;
    int length = 0,vowels = 0,i = 0,len;
    printf("Enter a string (end input with a newline): ");

    do {
        ch = getchar();
        str[i++] = ch;
    }while(ch != '\n' && i < 100);
    str[i-1] = '\0';

    for(len=0;str[len]!='\0';len++); // to calculate length of string array

    i=0;
    while(str[i]!='\0'){
        strRev[i] = str[len-1];
        i++;
        len--;
    }
    strRev[i] = '\0';
    
    for(i=0;strRev[i]!='\0';i++){
        printf("%c", strRev[i]);
    }
    return 0;
}