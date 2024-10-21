// Program to find simple interest in a function. Create function with arguments and return type
#include<stdio.h>
int simpleInt(int p,int r,int t){
    int SI;
    SI = (p*r*t)/100;
    return SI;
}
int main(){
    printf("Program to find Simple Interest using Function Def\n");
    int p,r,t,SI;
    printf("Enter Principal Amount: ");
    scanf("%d", &p);
    printf("Enter Rate of Intrest : ");
    scanf("%d", &r);
    printf("Enter Time Duration : ");
    scanf("%d", &t);
    SI = simpleInt(p,r,t);
    printf("Simple Intrest is %d", SI);
    return 0;
}
