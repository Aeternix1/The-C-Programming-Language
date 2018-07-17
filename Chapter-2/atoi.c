//Atoi function converts a string of digits into an integer

#include <stdio.h>
#define LIMIT 100

int atoi (char s[]);

int main () {
    char s[LIMIT]= "12345";
    printf("%d\n", atoi(s));
} 

int atoi (char s[]) {
    int i,n;
    n=0;
    for (i=0; s[i] >= '0' && s[i] <= '9'; ++i) {
        //Each number moves to another decimal place
        n = 10 * n + (s[i] - '0');
    }
    return n;
}

