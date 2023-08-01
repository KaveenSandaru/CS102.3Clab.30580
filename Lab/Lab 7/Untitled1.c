#include <stdio.h>
int main() {
    int matrix1[3][3], matrix2[3][3], matrixSum[3][3];
    printf("Enter values for Matrix 1 (3x3):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Value at (%d, %d): ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter values for Matrix 2 (3x3):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Value at (%d, %d): ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrixSum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("Matrix Sum:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrixSum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
