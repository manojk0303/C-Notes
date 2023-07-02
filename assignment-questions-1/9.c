/*
Write a function that accepts a pointer to a 2D array of integers and rotates the array 90 degrees
clockwise in-place.
*/

#include <stdio.h>
#include <stdlib.h>

void printMatrix(int** arr, int r, int c) {
    int i, j;
    printf("\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int** rotateMatrixClockwise(int** matrix, int rows, int cols) {
    int i, j;
    int** rotated = (int**)malloc(cols * sizeof(int*));

    for (i = 0; i < cols; i++) {
        rotated[i] = (int*)malloc(rows * sizeof(int));
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            rotated[j][rows - i - 1] = matrix[i][j];
        }
    }

    return rotated;
}

int main() {
    int rows = 3;
    int cols = 4;

    int** matrix = (int**)malloc(rows * sizeof(int*));
    int i, j;
    for (i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(cols * sizeof(int));
        for (j = 0; j < cols; j++) {
            matrix[i][j] = i * cols + j + 1;
        }
    }

    printf("Original Matrix:\n");
    printMatrix(matrix, rows, cols);

    int** rotatedMatrix = rotateMatrixClockwise(matrix, rows, cols);

    printf("Rotated Matrix:\n");
    printMatrix(rotatedMatrix, cols, rows);

    // Free memory
    for (i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    for (i = 0; i < cols; i++) {
        free(rotatedMatrix[i]);
    }
    free(rotatedMatrix);

    return 0;
}


/*
temp = arr[i][j];
arr[i][j] = arr[j][c - i - 1];
arr[j][c - i - 1] = arr[c - i - 1][r - j - 1];
arr[c - i - 1][r - j - 1] = arr[r - j - 1][i];
arr[r - j - 1][i] = temp;


*/