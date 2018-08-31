//Print n elements of an array, 10 per line, with each column separated by one
//blank, and with each line terminated by a newline

#include <stdio.h>

int main() {
    
    char array[100] = "Hello, World";
    int i;
    int n = 20;
    for (i=0; i<n; i++) {
            printf("%6c%c", array[i], (i%10==9 || i==n-1) ? '\n' : ' ');
        }

}


