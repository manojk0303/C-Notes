#include <stdio.h>
#include <stdlib.h>

int** makeTranspose(int (*arr)[2], int r, int c) {
    int i, j;
    int** transpose = (int**)malloc(c * sizeof(int*));
    for (i = 0; i < c; i++) {
        transpose[i] = (int*)malloc(r * sizeof(int));
        for (j = 0; j < r; j++) {
            transpose[i][j] = arr[j][i];
        }
    }
    return transpose;
}

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

int main() {
    const int r = 3, c = 2;
    int arr[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    int** transpose = makeTranspose(arr, r, c);
    printMatrix(transpose, c, r);

    // Free dynamically allocated memory
    for (int i = 0; i < c; i++) {
        free(transpose[i]);
    }
    free(transpose);

    return 0;
}
