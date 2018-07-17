//Atoi function converts a string of digits into an integer

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define LIMIT 100

int htoi(char s[]); 
int power(int a, int b);

int main () {
    printf("%x\n", 12345);
    int a = 16;
    int b = 4;
    printf("%d ^ %d is %d",a,b, power(a,b));
} 

//Takes in a string of hexadecmial numbers and converts it into its integer
//equivalent
int htoi(char s[]) {
    int i,n;
    int j;
    for (i=strlen(s); i > 0; --i) {
        n = n + (s[i] - '0') * power(16,j);
        ++j;
    }
    return n;
}
 
//a ^ b
int power(int a, int b) {
    int i,n;
    n = 1;
    for (i=0; i < b; ++i) {
        n = n * a;
    } 
    return n;
}
