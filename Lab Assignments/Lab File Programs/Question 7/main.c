/*WAP to read Principle amount and time for a loan application. 
Take Rate of interest as a symbolic constant. Calculate Simple interest and display results*/
#include<stdio.h>
int main(){
    int p,t,si,res;
    const int r;
    printf("Enter Principle Amount: ");
    scanf("%d", &p);
    printf("Enter Rate of Intrest: ");
    scanf("%d", &r);
    printf("Enter Time Duration: ");
    scanf("%d", &t);

    si = (p*r*t)/100;
    res = p+si;
    printf("Simple Interest after %d years is %d\n", t, si);
    printf("Total Amount after %d years is %d", t, res);
}
