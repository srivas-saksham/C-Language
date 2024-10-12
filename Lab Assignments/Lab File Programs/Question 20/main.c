//To find maximum of three numbers by if else if statement
#include<stdio.h>
#define aG printf("%d is Greater than %d and %d",a,b,c)
#define bG printf("%d is Greater than %d and %d",b,a,c)
#define cG printf("%d is Greater than %d and %d",c,a,b)
int main(){
    int a,b,c;
    printf("Enter Three Numbers: ");
    scanf("%d %d %d", &a,&b,&c);
    if(a>b && a>c)
    aG;
    else if(b>a && b>c)
    bG;
    else
    cG;
    return 0;
}