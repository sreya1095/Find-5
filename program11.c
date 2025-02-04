/*
 * Program to perform transpose of a matrix.
 */
#include <stdio.h>

void transpose(int matrix[][3], int transposed[][3], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

void printMatrix(int matrix[][3], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int transposed[3][3];

    transpose(matrix, transposed, 3, 3);

    printf("Original matrix:\n");
    printMatrix(matrix, 3, 3);

    printf("Transposed matrix:\n");
    printMatrix(transposed, 3, 3);

    return 0;
}
