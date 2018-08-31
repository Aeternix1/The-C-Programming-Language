//Rewrite the function lower, which converts upper case letters to lower case,
//with a conditional expression instead of if-else


#include <stdio.h>

#define MAX 1000

int main () {
    char array[MAX] = "Hello";
    int i;
    for (i=0; array[i]!='\0'; i++) {
        array[i] = (array[i] >= 'A' && array[i] <= 'Z') ? array[i]+32 : array[i];
    }
    
    printf("%s\n", array);
}
