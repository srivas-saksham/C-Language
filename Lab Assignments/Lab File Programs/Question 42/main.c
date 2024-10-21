#include<stdio.h>
#define palindromeYes printf("%d is a Palindrome Number!", numOg)
#define palindromeNo printf("%d is NOT a Palindrome Number!", numOg)
void main(){
    int num, numOg;
    int i, isPalindrome;
    int start = 10000;
    printf("Enter 5 Digits: ");
    scanf("%d", &num);
    numOg = num;
    for(i=0;i<2;i++){
        if((num/start) == (num%10)){
            isPalindrome = 1;
            num /= 10;
            num %= (start/10);
            start/=100;
        }
        else{
            isPalindrome = 0;
            break;
        }
    }
    (isPalindrome == 1)? palindromeYes : palindromeNo;
}
