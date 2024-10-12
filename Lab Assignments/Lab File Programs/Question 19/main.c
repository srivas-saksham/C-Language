//To find maximum of two numbers by using if else statement
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter Two Numbers: ");
    scanf("%d %d", &a,&b);
    if(a>b){
        printf("%d is Greator than %d",a,b);
    }
    else{
        printf("%d is Greator than %d",b,a);
    }
    return 0;
}