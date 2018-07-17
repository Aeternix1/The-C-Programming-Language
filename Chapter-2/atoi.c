//Atoi function converts a string of digits into an integer

#include <stdio.h>
#define LIMIT 100

int atoi (char s[]);
void lower(char s[]);

int main () {
    char s[LIMIT]= "12345";
    char a[LIMIT] = "HELLO";
    printf("%d\n", atoi(s));
    lower(a);
    printf("%s\n",a);

} 
//Takes in a string of numbers and returns an integer
int atoi (char s[]) {
    int i,n;
    n=0;
    for (i=0; s[i] >= '0' && s[i] <= '9'; ++i) {
        //Each number moves to another decimal place
        n = 10 * n + (s[i] - '0');
    }
    return n;
}
//Takes in a string of characers and converts uppercase into 
//Lowercase leaves numbers and symbols unchanged
void lower (char s[]) {
    int i;
    for (i=0; s[i] != '\0'; ++i) {
        if (s[i] > 'A' && s[i] < 'Z') {
            s[i] = s[i] + ' ';
        }
    }
} 

