//Write the function any(s1,s2) which returns the first location in a string s1
//Where any character from the string s2 occurs, or -1 if s1 contains no
//characters from s2. 

#include <stdio.h>

#define MAX 1000
#define NO_MATCH -1
#define MATCH (!NO_MATCH)

int any(char str1[], char str2[]);

int main () {

    char str1[MAX] = "hello2";
    char str2[MAX] = "tzxcv2b";
    int match = any(str1, str2);
    printf("The first matching character is %c", match);
    printf("The first matching character is at index %d", match);
}

int any(char str1[], char str2[]) {
    int state=NO_MATCH;
    int j,k;
    //Nested for loop, checks if a value in the second string 
    //Matches a value in the first string 
    //If they do store the value and escape the loop
    for (j=0; str1[j]!= '\0' ;++j) {
        for (k=0; str2[k]!='\0'||state==MATCH; ++k) {
            if (str1[j] == str2[k]) {
                //Finding the first matching value
                state = j;
                //Finding the first matching index in s1
                //printf("%d\n",j);
                
            }
        }
    }

    return state;

} 
