//The following function takes in a string 
//and a character and removes every instance of that character from the string

#define MAX 1000

#include <stdio.h>

void squeeze(char string[], char c);

int main () {

char array[MAX] = "Hello";

squeeze(array, 'e');
printf("%s\n", array);

}

void squeeze(char string[], char c) { 
    int i,j;
    for (i=j=0; string[i]!='\0'; ++i) { 
        if (string[i] != c) {
            //Uses the value and then increments after
            string[j++] = string[i];
        }
    }
}


