/*
Write a function that accepts a pointer to a string and removes all the vowels from the string,
modifying it in-place.
*/

#include <stdio.h>
#include <string.h>

char *vowelRemover(char *str,int l){
    int i=0,j=0;
    while(str[i] != '\0'){
        if(str[i] != 'a' && str[i] != 'e' &&str[i] != 'i' && str[i] != 'o' && str[i] != 'u'&& str[i] != 'A'&& str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U'  ){
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] ='\0';
    return str;
}


int main(){

    char str[100];
    printf("[ENTER A STRING ]  :  ");
    scanf("%s",str);
    printf("\n [AFTER REMOVING VOWELS ]  :  %s",vowelRemover(str,strlen(str)));
    return 0;
}