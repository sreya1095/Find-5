/*
 * Program to perform matrix multiplication.
 */
#include <stdio.h>

#define MAX 10

void multiplyMatrices(int firstMatrix[MAX][MAX], int secondMatrix[MAX][MAX], int result[MAX][MAX], int rowFirst, int columnFirst, int rowSecond, int columnSecond) {
    for (int i = 0; i < rowFirst; ++i) {
        for (int j = 0; j < columnSecond; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < columnFirst; ++k) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

int main() {
    int firstMatrix[MAX][MAX], secondMatrix[MAX][MAX], result[MAX][MAX], rowFirst, columnFirst, rowSecond, columnSecond;

    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &rowFirst, &columnFirst);

    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &rowSecond, &columnSecond);

    if (columnFirst != rowSecond) {
        printf("Error! column of first matrix not equal to row of second.\n");
        return -1;
    }

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rowFirst; ++i) {
        for (int j = 0; j < columnFirst; ++j) {
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rowSecond; ++i) {
        for (int j = 0; j < columnSecond; ++j) {
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    multiplyMatrices(firstMatrix, secondMatrix, result, rowFirst, columnFirst, rowSecond, columnSecond);

    printf("Resultant matrix:\n");
    for (int i = 0; i < rowFirst; ++i) {
        for (int j = 0; j < columnSecond; ++j) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
