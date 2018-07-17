//Atoi function converts a string of digits into an integer

#include <stdio.h>
#include <ctype.h>

#define LIMIT 100
#define FALSE 0
#define TRUE !(FALSE)

int htoi(char s[]); 
int power(int a, int b);
int last(char str[]);

int main () {
    printf("%x\n", 12345);
    int a = 16;
    int b = 4;
    printf("%d ^ %d is %d\n",a,b, power(a,b));
    char hex[LIMIT] = "3039x";
    char hello[LIMIT] = "FFFFX";
    printf("The Length of the string is %d\n", last(hex));
    printf("%d\n", htoi(hex));
    printf("%d\n", htoi(hello));
} 

//Takes in a string of hexadecmial numbers and converts it into its integer
//equivalent
int htoi(char s[]) {
    int i,n,j;
    j=n=0;
    for (i=last(s); i >= 0 ; --i) {
        if (s[i] == 'x' ||  s[i] == 'X') {
            --i;
        }
        if (s[i]>='0' && s[i]<='9') {
            n = n + (s[i] - '0') * power(16,j);
            ++j;
        } else if (s[i] >= 'A' && s[i] <= 'F') {
            n = n + (s[i] - 55) * power(16,j); 
            ++j;
        } else if (s[i] >= 'a' && s[i] <= 'f') {
            n = n + (s[i] - 87) * power(16,j);
            ++j;
        }      
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

//Finds the index before the null terminator
int last(char str[]) {
    int i;
    for (i=0; str[i] != '\0'; ++i) {
        ;
    }
    return i-1;
}

