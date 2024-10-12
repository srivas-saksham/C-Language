//To print sum of series: (1)+(1/2)+(1/3).....+(1/n)
#include<stdio.h>
int main(){
    int elmN;
    float i,sum;
    printf("Enter Number of Elements: ");
    scanf("%d",&elmN);

    for(i=1.0;i<=elmN;i++){
        sum += 1.0/i;
    }
    printf("Sum is %.2f", sum);
    return 0;
}