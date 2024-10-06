// Define a Matrix, Input & Print.
#include<stdio.h>
void main(){
    int i,j;
    int a[3][3];
    // input value in matrix 
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter number @ row %d column %d: ",i+1,j+1);
            scanf("%d", &a[i][j]);
        }
    }
    // print the matrix
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
}