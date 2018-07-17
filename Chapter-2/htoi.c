//Atoi function converts a string of digits into an integer

#include <stdio.h>
#include <ctype.h>

#define LIMIT 100

int htoi(char s[]); 
int power(int a, int b);
int strlength(char str[]);

int main () {
    printf("%x\n", 12345);
    int a = 16;
    int b = 4;
    printf("%d ^ %d is %d",a,b, power(a,b));
    char hex[LIMIT] = "3039";
    printf("The Length of the string is %d\n", strlength(hex));
    printf("%d\n", htoi(hex));
} 

//Takes in a string of hexadecmial numbers and converts it into its integer
//equivalent
int htoi(char s[]) {
    int i,n,j;
    j=n=0;
    for (i=strlength(s); i > 0 ; --i) {
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

//String Length Function
int strlength(char str[]) {
    int i;
    for (i=0; str[i] != '\0'; ++i) {
        ;
    }
    return i;
}

