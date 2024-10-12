//WAP to print following patterns: triangle of '*', triangle of digits
#include<stdio.h>
void LrightStarTrng(int r){
    int i,j;
    for(i=1;i<=r;i++){
        for(j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
}
void RrightStarTrng(int r){
    int i,j,s;
    for(i=1;i<=r;i++){
        for(s=0;s<r-i;s++){
            printf(" ");
        }
        for(j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
}
void LrightNumTrng(int r){
    int i,j,n=0;
    for(i=1;i<=r;i++){
        for(j=0;j<i;j++){
            //to prefix 0 in single digit numbers
            (n==0||n==1||n==2||n==3||n==4||n==5||n==6||n==7||n==8||n==9)? printf("0%d ",n) : printf("%d ",n); 
            n++;
        }
        printf("\n");
    }
}
void RrightNumTrng(int r){
    int i,j,s,n=0;
    for(i=1;i<=r;i++){
        for(s=0;s<r-i;s++){
            printf("   "); // giving 3 spaces as one extra space in giving at printing
        }
        for(j=0;j<i;j++){
            (n==0||n==1||n==2||n==3||n==4||n==5||n==6||n==7||n==8||n==9)? printf("0%d ",n) : printf("%d ",n);
            n++;
        }
        printf("\n");
    }
}
int main(){
    int i,j,r;
    printf("Enter Number of Rows: ");
    scanf("%d", &r);
    LrightStarTrng(r);
    printf("\n");
    RrightStarTrng(r);
    printf("\n");
    LrightNumTrng(r);
    printf("\n");
    RrightNumTrng(r);

    return 0;
}