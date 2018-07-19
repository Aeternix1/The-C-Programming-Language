//String concatenate
//Take one string and join it to another on the end 
//Make sure to add the null terminator on the end of the concatenated string

#include <stdio.h>

#define MAX 1000
        
void strcom (char string1[],char string2[]);

int main () {
    char s1[MAX] = "Hello ";
    char s2[MAX] = "Ajay";

    strcom (s1, s2);
    printf("%s\n", s1);
}


void strcom (char string1[],char string2[]) {
    //Get to the end of string one
    int i,j;
    for (i=j=0; string1[i]!= '\0'; ++i) {
        ; 
    } 
    //Add the second string onto the first
    //Use post fix to remove the increment counter
    while ((string1[i++] = string2[j++]) != '\0') {
        ;
    } 
    string1[i] = '\0';
}

