// Addition of Matrices
#include<stdio.h>
void main(){
    int i,j;
    int a[3][3],b[3][3];
    int c[3][3]= {0};
    // input value in matrix A
    printf("Enter Matrix A: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter number @ row %d column %d: ",i+1,j+1);
            scanf("%d", &a[i][j]);
        }
    }
    // input value in matrix B
    printf("Enter Matrix B: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter number @ row %d column %d: ",i+1,j+1);
            scanf("%d", &b[i][j]);
        }
    }

    //adding two matrix
    char inpt;
    printf("You Want to Sum the Matrices or Difference? \n");
    scanf("%s", &inpt);
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            c[i][j] = (inpt == "Sum")? a[i][j] + b[i][j] : a[i][j] - b[i][j];
        }
    }

    // print the matrix A
    printf("Matrix A is: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    // print the matrix B
    printf("Matrix B is: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d", b[i][j]);
        }
        printf("\n");
    }
    // print the matrix C
    printf("Matrix C is: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d", c[i][j]);
        }
        printf("\n");
    }
}
