/*
Create a function that accepts two dynamically allocated arrays of integers and merges them into
a new sorted array. The function should return a pointer to the merged array, and it should handle
the deallocation of the input arrays.
*/
#include <stdio.h>
#include <stdlib.h>

#define N1 4
#define N2 4

void printArr(int* arr, int l) {
    int i;
    printf("\n");
    for (i = 0; i < l; i++) {
        printf("%d ", arr[i]);
    }
}

int* sortArr(int* arr, int l) {
    int i, j, isSwapped;
    int temp;
    for (i = 0; i < (l - 1); i++) {
        isSwapped = 0;
        for (j = 0; j < (l - i - 1); j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSwapped = 1;
            }
        }
        if (!isSwapped) {
            break;
        }
    }
    return arr;
}

int* mergeAndSort(int* arr1, int* arr2, int l1, int l2) {
    // Merging
    int i;
    int* mergedArr = malloc((l1 + l2) * sizeof(int));
    for (i = 0; i < (l1 + l2); i++) {
        mergedArr[i] = (i < l1) ? arr1[i] : arr2[i - l1];
    }
    // Sorting
    int* sortedArr = sortArr(mergedArr, l1 + l2);
    return sortedArr;
}

int main() {
    int l = N1 + N2;
    int* arr1 = malloc(l * sizeof(int));
    int* arr2 = malloc(l * sizeof(int));
    arr1[0] = 1;
    arr1[1] = 6;
    arr1[2] = 8;
    arr1[3] = 7;

    arr2[0] = 3;
    arr2[1] = 2;
    arr2[2] = 4;
    arr2[3] = 6;

    int* arr = malloc(l * sizeof(int));
    arr = mergeAndSort(arr1, arr2, N1, N2);
    printArr(arr, l);
    
    free(arr1);
    free(arr2);
    free(arr);
    return 0;
}
