//Write a program to copy its input to its output
//Replacing each string of one or more blanks by a single blank
#include <stdio.h>

main () {
    
    int character;
    int numSpaces = 0;

    while ((character = getchar()) != EOF) { 
        
        //character != ' '
        if (character != ' ') { 
            numSpaces = 0;
        } 

        if (character == ' ') {
            ++numSpaces;
        } 

        if (numSpaces > 1) {
            ;
        } else { 
            putchar(character); 
        }
        

        

        /*putchar(c);*/
        /*//Skip over any extra ones*/
        /*if (c == ' ') {*/
            /*count = 0;*/
            /*while ((d = getchar()) != ' ') {*/
                /*count++ */
            /*}*/
            /*print("%d\n", count);*/
        /*}*/
    }
}
