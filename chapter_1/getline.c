#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int get_line(char s[], int lim);
void copy(char to[], char from[]);

/* print the longest input line */

main() { 

    int len;
    int max;  
    int index;
    char line[MAXLINE];
    char longest[MAXLINE]; 

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0 ) { 
        if (len > max) { 
            max = len;  
            index = add(
           
        } 
    }
    if (max > 0) /* there was a line */ {
        printf("%s", longest);
        printf("%d", max); 
    } 

    return 0;

} 

//Stores a line from standard input into an array
int get_line(char s[], int lim) { 
    int c, i; 

    for (i=0; i < lim-1 && (c=getchar()) != EOF && c!='\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    } 
    s[i] = '\0';
    return i;
}

//Copy a line from one array into another array
void copy(char to[], char from[]) { 
    int i;
    i = 0; 
    while ((to[i] = from[i]) != '\0')  { 
        ++i; 
    }
} 

//Adds lines of inputs to a current array 
void add(char to[], char from[], int index) { 
    int i; 
    i = 0;
    while ((from[i] != '\0')){
        to[index] = from[i];
        ++index;
        ++i;
    } 
    return add;
}
