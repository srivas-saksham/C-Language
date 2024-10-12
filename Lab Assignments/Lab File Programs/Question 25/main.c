//WAP to print natural numbers till n using while loop. Also print reverse counting from m to 1. Get m,n from user at runtime
#include <stdio.h>

int main(){
    int m, n, i = 1;
    printf("Enter the Top Limit Number: ");
    scanf("%d", &n);
    
    printf("Natural Numbers from 1 to %d:\n", n);
    while (i <= n){
        printf("%d\n", i);
        i++;
    }

    printf("Enter the Starting Point for Countdown: ");
    scanf("%d", &m);
    
    i = m;
    printf("Countdown Start:\n");
    while (i >= 1){
        printf("%d\n", i);
        i--;
    }
    return 0;
}
