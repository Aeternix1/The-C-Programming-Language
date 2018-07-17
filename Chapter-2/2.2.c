//Write a loop equivalet to the following loop:
//for (i=0; i<lim-1 && (c=getchar()) != '\n' && c != EOF; ++i) 
//s[i] = c;
//Without using && or ||

#include <stdio.h>

#define LIM 10

int main () {
    int i = 0;
    int c;
    char s[LIM];
    int lim = LIM;
    
    c=getchar();
    while (c != EOF) { 
        if (i > lim-1) { 
            c = EOF;
        } else if (c == '\n') { 
            c = EOF;
        } else {
            s[i] = c;
            c = getchar();
            ++i;
        }
    }
    /*for (i=0; i<lim-1 && (c=getchar()) != '\n' && c!=EOF; ++i){*/
        /*s[i] = c;*/
    /*} */
    s[i] = '\0';
    printf("%s", s);
}
