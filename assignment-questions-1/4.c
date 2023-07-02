#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isPalindrome(char *str, int start, int end) {
    while (start < end) {
        if (str[start++] != str[end--]) {
            return 0;
        }
    }
    return 1;
}

char* getLongestPalindrome(char *str, int length) {
    int maxLength = 1; // Length of longest palindrome substring
    int start = 0; // Starting index of longest palindrome substring

    for (int i = 0; i < length - 1; i++) {
        for (int j = i; j < length; j++) {
            int substringLength = j - i + 1;
            if (substringLength > maxLength && isPalindrome(str, i, j)) {
                maxLength = substringLength;
                start = i;
            }
        }
    }

    // Allocate memory for the longest palindrome substring
    char *longestPalindrome = (char*) malloc((maxLength + 1) * sizeof(char));
    if (longestPalindrome == NULL) {
        return "memory allocation failed";
    }

    // Copy the longest palindrome substring into the result
    strncpy(longestPalindrome, str + start, maxLength);
    longestPalindrome[maxLength] = '\0';

    return longestPalindrome;
}

int main() {
    char str[10] = "helloolee";
    printf("Longest palindrome substring: %s\n", getLongestPalindrome(str, strlen(str)));
    return 0;
}