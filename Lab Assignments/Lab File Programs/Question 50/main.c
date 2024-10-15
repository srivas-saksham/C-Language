//Program to compare and concatenate two string (without inbuilt function).
#include<stdio.h>
int main(){
    char str1[50],str2[50];
    printf("\nEnter Two Strings: ");
    scanf("%s %s", str1, str2);
    char fullStr[150];
    int i,j;
    //Concatenating Strings
    for(i=0; str1[i]!='\0'; i++){
        fullStr[i] = str1[i];
    }
    fullStr[i] = ' ';

    for(j=0; str2[j]!='\0'; j++){
        fullStr[i+j+1] = str2[j];
    }
    fullStr[i+j+1] = ' ';

    printf("Concatenated String is:\n");
    printf("%s", fullStr);
    
    //Comparing Strings
    i=0;
    while(str1[i] == str2[i] && str1[i] != '\0' && str2[i] !='\0'){
        i++;
    }
    if(str1[i]=='\0' && str2[i]=='\0'){
        printf("\nBoth the Strings have Equal Values!");
    }
    else{
        printf("\nStrings are Not Equal!");
    }
    return 0;
}
