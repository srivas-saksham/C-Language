//WAP to generate multiplication tables using nested do-while statements
#include<stdio.h>
int main(){
    int n,mn,i,j,max;
    printf("Enter Number whose table you want to Print: ");
    scanf("%d",&n);
    printf("Till which Number you want to Multiply: ");
    scanf("%d", &max);

    do{
        i = 1;
        do{
            mn = n*i;
            printf("%d x %d = %d\n",n,i,mn);
            i++;
        }while(i<=max);
        i=0;
    }while(i==1);
    return 0;
}