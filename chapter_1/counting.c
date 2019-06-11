//Write a program to count blanks, tabs and newlines
#include <stdio.h>

main ()
{
    double  nl, tb, bl ; 
    nl = tb = bl = 0;
    int c;
        while ((c = getchar()) != EOF) {
            if (c == '\n') {
                ++nl; 
            } else if (c == '\t') {
                ++tb;
            } else if (c == ' ') {
                ++bl;
            }
        } 
    printf("The number of new lines %.0f\n", nl);
    printf("The number of blanks %.0f\n", bl);
    printf("The number of tabs %.0f\n", tb);

}
