/*
 * Program to perform matrix addition.
 */
#include <stdio.h>

#define MAX 10

void addMatrices(int firstMatrix[MAX][MAX], int secondMatrix[MAX][MAX], int result[MAX][MAX], int row, int column) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            result[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
        }
    }
}

int main() {
    int firstMatrix[MAX][MAX], secondMatrix[MAX][MAX], result[MAX][MAX], row, column;

    printf("Enter rows and columns for the matrices: ");
    scanf("%d %d", &row, &column);

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    addMatrices(firstMatrix, secondMatrix, result, row, column);

    printf("Resultant matrix:\n");
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
