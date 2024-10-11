/* Read input from user at runtime and convert time from
 -hours to seconds
 -hours to minutes
 -minutes to seconds */

#include<stdio.h>
int main(){
    int h,h_m,m,s;
    printf("Enter the Hours: ");
    scanf("%d", &h);
    printf("Enter the Minutes: ");
    scanf("%d", &m);
    s = m*60;
    h_m = h*60;
    printf("\n%d Hours is %d Minutes",h,h_m);
    printf("\n%d Minutes is %d Seconds",m,s);
    return 0;
}