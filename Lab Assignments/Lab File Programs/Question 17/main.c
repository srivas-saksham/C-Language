//To find maximum of two numbers by using Conditional operator 
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter Two Numbers: ");
    scanf("%d %d", &a,&b);
    (a>b)? printf("%d is Greater then %d", a,b) : printf("%d is Greater than %d", b,a);
    return 0;
}