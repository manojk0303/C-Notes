//1. Write a recursive function to calculate the power of a given number (x^n), where both x and n are integers.

#include <stdio.h>

float power(int,int);

float power(int base, int n) {
    if (n == 0) {
        return 1;
    } else if (n < 0) {
        return (float)1/(base*power(base,-n-1));
    }
    return base * power(base, n - 1);
}

int main(){
    printf(" %f",power(2,-2));
    return 0;
}