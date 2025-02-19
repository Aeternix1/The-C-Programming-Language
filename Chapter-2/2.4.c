//Write a remove function that deletes each character in s1
//That matches any character in the string s2
//V2.0 remove case sensitive characters ie if 'H' remove all instances of 'h'

#include <stdio.h> 

#define LIMIT 100
#define OUT 0
#define IN  1

void squeeze2(char str1[], char str2[]);

int main () {
    char string1[LIMIT] = "hhhhhhh";
    char string2[LIMIT] = "H";

    squeeze2(string1,string2);
    printf("%s\n", string1);
    return 0;
} 

void squeeze2(char str1[],char str2[]) {
    int i,j,k,state; 
    state = OUT;
    
    for (j=k=0; str1[j]!='\0'; ++j) {
        //If the value is in string2 then set the state to IN
        for (i=0; str2[i]!='\0'; ++i) {
            if (str1[j] == str2[i]) {
                state=IN;
                //If the value in string2 is lowercase
                //Consider equality with an uppercase value a match
            } else if(str2[i] >= 'a' && str2[i] <= 'z') {
                if (str1[j] - ('A'-'a') == str2[i]) {
                    state=IN;
                }
                //If the value in string2 is Uppercase
                //Consider equality with a lowervase value a match
            } else if(str2[i] >= 'A' && str2[i] <= 'Z') { 
                if (str1[j] + ('A' - 'a') == str2[i]) {
                    state=IN;
                }
            }
        }
        //If there was no character in the second string 
        //Corresponding to the jth character, place jth character into the new
        //string
        if(state == OUT) {
            str1[k++] = str1[j];
        } else {
            state = OUT;
        } 
        
    }
    //The kth value represents our new string
    str1[k] = '\0';
}
