//Write a program that prints its input one word per line 


#include <stdio.h> 

main () {

    int c; 
    int numSpaces = 0;

    while ((c = getchar()) != EOF) {
        
        if (c == ' ' || c == '\t' || c == '\n') { 
            ++numSpaces;
        } else { 
            numSpaces = 0; 
            putchar(c);
        }
        if (numSpaces == 1) {
            putchar('\n');
        }
    }

}
