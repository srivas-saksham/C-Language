//Program to find if a given string is palindrome or not.
#include<stdio.h>
#define palindromeYes printf("%s is a Palindrome Number!", str)
#define palindromeNo printf("%s is NOT a Palindrome Number!", str)
int main(){
    char str[50];
    int len,i, isPalindrome;
    printf("Enter String: ");
    scanf("%s", str);
    
    for(len=0;str[len]!='\0';len++);

    for(i=0;i<(len/2);i++){
        if(str[i] != str[len-1-i]){
            isPalindrome = 0;
            break;
        }
        else{
            isPalindrome = 1;
        }
    }
    (isPalindrome)? palindromeYes : palindromeNo;
    return 0;
}