//Write a remove function that deletes each character in s1
//That matches any character in the string s2

#include <stdio.h> 

#define LIMIT 100
void squeeze2(char str1[], char str2[]);

int main () {
    
    char string1[LIMIT] = "Hx There!";
    char string2[LIMIT] = "Hello there!";
    squeeze2(string1,string2);
    printf("%s\n", string1);
    return 0;
} 

void squeeze2(char str1[],char str2[]) {
    int i,j,k;
    char a;
    for (k=0; str2[k] != '\0'; ++k) {
        a = str2[k];
        for (i=j=0; str1[i] != '\0'; ++i) { 
            if (str1[i] != a) {
                str1[j++] = str1[i];
            }
        }
    }
}
