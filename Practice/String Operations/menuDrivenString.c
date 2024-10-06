#include<stdio.h>
#define newLine printf("\n");
#define strCpyPrt printf("The Copied String is %s.\n", strCopy)
#define strLenPrt printf("The Length of String is %d Characters.", i)
#define palindromeYes printf("%s is a Palindrome Number!", str)
#define palindromeNo printf("%s is NOT a Palindrome Number!", str)
// Defining Functions---------------------------------------------------------------------------------------------
void strCpyLen(int val){
    char str[50], strCopy[50];
    int i;
    printf("Enter String: ");
    scanf("%s", str);
    for(i=0;str[i]!='\0';i++){
        strCopy[i] = str[i];
    }
    (val == 1)? strCpyPrt : strLenPrt;
    newLine
}

void strCat(){
    char str1[50],str2[50],str3[50];
    printf("\nEnter First Middle and Last Name: ");
    scanf("%s %s %s", str1, str2, str3);
    char fullStr[150];
    int i,j,k;
    for(i=0; str1[i]!='\0'; i++){
        fullStr[i] = str1[i];
    }
    fullStr[i] = ' ';

    for(j=0; str2[j]!='\0'; j++){
        fullStr[i+j+1] = str2[j];
    }
    fullStr[i+j+1] = ' ';
    
    for(k=0; str3[k]!='\0'; k++){
        fullStr[i+j+k+2] = str3[k];
    }
    fullStr[i+j+k+2] = '\0';

    printf("%s", fullStr);
    newLine
}

void strComp(){
    char str1[50], str2[50];
    int i=0;
    printf("Enter two Strings: ");
    scanf("%s %s", str1, str2);
    while(str1[i] == str2[i] && str1[i] != '\0' && str2[i] !='\0'){
        i++;
    }
    if(str1[i]=='\0' && str2[i]=='\0'){
        printf("Both the Strings have Equal Values!");
    }
    else{
        printf("Strings are Not Equal!");
    }
    newLine
}

void strPalindrome(){
    char str[50];
    int len,i, isPalindrome;
    printf("Enter String: ");
    scanf("%s", str);
    
    for(len=0;str[len]!='\0';len++){        // finding number of characters in string
        continue;
    }

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
    newLine
}


void main(){
    int choice;
    newLine
    printf("Menu Driven String Functions.\n");
    newLine
    printf("1) Copy String\n");
    printf("2) Find Length of String\n");
    printf("3) Concatnate Strings\n");
    printf("4) Compare  Strings\n");
    printf("5) Palindrome  String\n");
    printf("Enter Your Choice: ");
    scanf("%d", &choice);

    if(choice == 1){
        strCpyLen(choice);
    }
    else if(choice == 2){
        strCpyLen(choice);
    }
    else if(choice == 3){
        strCat();
    }
    else if (choice == 4){
        strComp();
    }
    else if (choice == 5){
        strPalindrome();
    }
    else{
        printf("Invalid Value! Try Again");
    }
    newLine
}