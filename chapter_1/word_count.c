//Count the number of words in a program


#include <stdio.h>

#define IN 1
#define OUT 0

//Count lines, words and characters in input 

main () 
{
    int c, nl, nw, nc, state; 

    state = OUT; 
    nl = nw = nc = 0; 
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n') {
            ++nl; 
        }
        if (c == '\n' || c == ' ' || c == '\t') {
            state = OUT;
        }  else if  (state == OUT) {
            state = IN;
            ++nw;
        } 
    }
    printf("%d %d %d\n", nl, nw, nc);
}

//Don't understand how the check for multiple ' ' back to back why isn't there
//double counting 
//Test backspace and delete inputs 
//Test for a single ' ' 
//Test for multiple ' ' back to back
//Empty word case will fail 
//Long strings with no spaces besides newlines 
