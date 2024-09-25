#include <stdio.h>

void printMatrix(int matrix[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void multiplyMatrices(int matrix1[][10], int matrix2[][10], int result[][10], int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int rows1, cols1, rows2, cols2;
    printf("Enter the number of rows for matrix 1: ");
    scanf("%d", &rows1);
    printf("Enter the number of columns for matrix 1: ");
    scanf("%d", &cols1);
    printf("Enter the number of rows for matrix 2: ");
    scanf("%d", &rows2);
    printf("Enter the number of columns for matrix 2: ");
    scanf("%d", &cols2);

    if (cols1 != rows2) {
        printf("Matrix multiplication is not possible.\n");
        return 1;
    }

    int matrix1[10][10], matrix2[10][10], result[10][10];

    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("Matrix 1:\n");
    printMatrix(matrix1, rows1, cols1);

    printf("Matrix 2:\n");
    printMatrix(matrix2, rows2, cols2);

    multiplyMatrices(matrix1, matrix2, result, rows1, cols1, cols2);

    printf("Resultant Matrix:\n");
    printMatrix(result, rows1, cols2);

    return 0;
}
