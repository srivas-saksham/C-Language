/*Program to perform Matrix Operations (switch-case): 
Addition, Subtraction, Multiplication and Transpose*/
#include<stdio.h>
void inputMatrix(int n[3][3]){
    int i, j;
    printf("Enter a 3x3 Matrix:\n");

    // Input values in the matrix 
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Enter number @ row %d column %d: ", i + 1, j + 1);
            scanf("%d", &n[i][j]);
        }
    }
}

void printMatrix(int a[3][3]){
    // Print the matrix
    int i, j;
    printf("Matrix:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void addMatrix(int a[3][3], int b[3][3], int result[3][3]){
    // Adding two matrices
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

void subtractMatrix(int a[3][3], int b[3][3], int result[3][3]){
    // Subtracting two matrices
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            result[i][j] = a[i][j] - b[i][j];
        }
    }
}

void multiplyMatrix(int a[3][3], int b[3][3], int result[3][3]){
    // Multiplying two matrices
    int i, j, k;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            result[i][j] = 0;
            for(k = 0; k < 3; k++){
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void transposeMatrix(int a[3][3], int result[3][3]){
    // Transposing the matrix
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            result[j][i] = a[i][j];
        }
    }
}

int main(){
    int a[3][3], b[3][3], result[3][3];
    char choice;
    printf("Choose operation:\n");
    printf("Addition (+)\nSubtraction (-)\nMultiplication (x)\nTranspose (t)\n");
    scanf(" %c", &choice);  //space before %c to ignore newline character from previous input

    switch (choice){
        case '+':
            printf("Input first matrix:\n");
            inputMatrix(a);
            printf("Input second matrix:\n");
            inputMatrix(b);
            addMatrix(a, b, result);
            printf("Result of matrix addition:\n");
            printMatrix(result);
            break;

        case '-':
            printf("Input first matrix:\n");
            inputMatrix(a);
            printf("Input second matrix:\n");
            inputMatrix(b);
            subtractMatrix(a, b, result);
            printf("Result of matrix subtraction:\n");
            printMatrix(result);
            break;

        case 'x':
            printf("Input first matrix:\n");
            inputMatrix(a);
            printf("Input second matrix:\n");
            inputMatrix(b);
            multiplyMatrix(a, b, result);
            printf("Result of matrix multiplication:\n");
            printMatrix(result);
            break;

        case 't':
            printf("Input matrix to transpose:\n");
            inputMatrix(a);
            transposeMatrix(a, result);
            printf("Transpose of the matrix:\n");
            printMatrix(result);
            break;

        default:
            printf("Invalid operation!\n");
            break;
    }

    return 0;
}
