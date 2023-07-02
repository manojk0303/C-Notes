#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* removeCharacter(char *str, char ch, int l) {
    int i, j, once = 1;
    for (i = j = 0; i < l; i++) {
        if (str[i] != ch) {
            str[j++] = str[i];
        } else {
            if (once) {
                str[j++] = str[i];
            }
            once = 0;
        }
    }
    str[j] = '\0';
    return str;
}

char* deleteDuplicates(char* str, int l) {
    char* temp = (char*)malloc((l + 1) * sizeof(char));
    strcpy(temp, str);

    int i, j;
    for (i = 0; i < l; i++) {
        for (j = i; j < l; j++) {
            if (i == j) {
                continue;
            }
            if (temp[i] == temp[j]) {
                removeCharacter(temp, temp[j], l);
            }
        }
    }
    return temp;
}

char* sortString(char* str, int l) {
    int i, j, isSwapped;
    char temp;
    for (i = 0; i < (l - 1); i++) {
        isSwapped = 0;
        for (j = 0; j < (l - i - 1); j++) {
            if (str[j] > str[j + 1]) {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
                isSwapped = 1;
            }
        }
        if (!isSwapped) {
            break;
        }
    }
    return str;
}

char* uniqueSorted(const char* str) {
    int length = strlen(str);

    
    char* temp = strdup(str); // memory id dynamically allocated here too.
    if (temp == NULL) {
        printf("Memory allocation failed.\n");
        return NULL;
    }

    // Remove duplicates
    char* uniqueString = deleteDuplicates(temp, length);

    // Sort the characters
    char* sortedString = sortString(uniqueString, strlen(uniqueString));

    // Free the temporary buffer
    free(temp);

    return sortedString;
}

int main() {
    char str[100];
    printf("[ENTER A STRING]: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove trailing newline character

    char* result = uniqueSorted(str);
    if (result != NULL) {
        printf("Unique characters sorted in ascending order: %s\n", result);
        free(result);
    }

    return 0;
}
