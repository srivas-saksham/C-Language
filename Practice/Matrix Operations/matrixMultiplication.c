#include <stdio.h>

int main() {
    int i, j, k;
    int rA, cA, rB, cB;

    // Input dimensions of matrices
    printf("Enter Dimensions of Matrix A (rows and columns): ");
    scanf("%d %d", &rA, &cA);
    printf("Enter Dimensions of Matrix B (rows and columns): ");
    scanf("%d %d", &rB, &cB);

    // Check if multiplication is possible
    if (cA != rB) {
        printf("Multiplication not possible with given dimensions.\n");
        return 1;  // Exit the program
    }

    int a[rA][cA], b[rB][cB], c[rA][cB];

    // Initialize matrix C to 0
    for (i = 0; i < rA; i++) {
        for (j = 0; j < cB; j++) {
            c[i][j] = 0;
        }
    }

    // Input values for matrix A
    printf("Enter Matrix A:\n");
    for (i = 0; i < rA; i++) {
        for (j = 0; j < cA; j++) {
            printf("Enter number @ row %d column %d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    // Input values for matrix B
    printf("Enter Matrix B:\n");
    for (i = 0; i < rB; i++) {
        for (j = 0; j < cB; j++) {
            printf("Enter number @ row %d column %d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    // Matrix multiplication A * B = C
    for (i = 0; i < rA; i++) {
        for (j = 0; j < cB; j++) {
            for (k = 0; k < cA; k++) {
                c[i][j] += a[i][k] * b[k][j];  // Correct index for b
            }
        }
    }

    // Print Matrix A
    printf("Matrix A is:\n");
    for (i = 0; i < rA; i++) {
        for (j = 0; j < cA; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // Print Matrix B
    printf("Matrix B is:\n");
    for (i = 0; i < rB; i++) {
        for (j = 0; j < cB; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    // Print the Resultant Matrix C
    printf("Matrix C (A * B) is:\n");
    for (i = 0; i < rA; i++) {
        for (j = 0; j < cB; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;  // Return statement for main
}