//Write a program to copy its input to its output, replacing each tab by \t,
//each backspace by \b, and each backslash by \\. This makes tabs and backspaces
//visible in an unambiguous way. 


#include <stdio.h> 

main () {

    int character, key; 

    while ((character = getchar()) != EOF) { 
            if (character == '\t') {  
                putchar('\\');
                character = 't';
            } 
            else if (character == '\b' || character ==  127) {  
                putchar('\\');
                character = 'b';
            } 

            putchar(character);

        }

}
