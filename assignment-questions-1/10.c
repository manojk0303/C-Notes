/*
Create a function that accepts a pointer to a 2D array of floating-point numbers and calculates
the average value of each column, storing the results in a dynamically allocated 1D array. The
function should return a pointer to the resulting array.
*/
#include <stdio.h>
#include <stdlib.h>

float* getColomnAverage(float (*arr)[3],int r,int c){
    int i,j;
    float temp,*avg = malloc(c*sizeof(float));
    for(i=0;i<r;i++){
        printf("\n");
        temp = 0;
        for(j=0;j<c;j++){
            temp += arr[j][i];
            printf("%f " ,arr[j][i]);
        }
        avg[i] = (temp/c);
    }
    return avg;
}
void printArr(float* arr, int l) {
    int i;
    printf("\n");
    for (i = 0; i < l; i++) {
        printf("%f ", arr[i]);
    }
}

int main() {
   
    float arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    float *avg = malloc(3*sizeof(float));
    avg = getColomnAverage(arr,3,3);
    printArr(avg,3);
    return 0;
}


//temp += arr[i+(j*r)];