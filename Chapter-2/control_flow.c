//Control Flow speficies the order in which computations are performed


#include <stdio.h>

int main () {

    int i;
    int n=12;
    char s[1000] = "Hello world";

    if (n > 0) 
        for (i = 0; i<n; i++) {
            if (s[i] > 0) {
                printf("...");
                return i;
            }
        }

    else /*WRONG*/
        printf("error -- n is negative\n");
}
