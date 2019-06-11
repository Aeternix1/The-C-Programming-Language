//Print a histogram of the frequencies of different characters in the input

#include <stdio.h>

#define LENGTH 128

main() {
    
    int i, j, c;
    int lengths[LENGTH]; 

    //initialzing the array of all the characters
    for (i = 0; i < LENGTH; ++i) {
        lengths[i] = 0;
    }
    
    while ((c = getchar()) != EOF) {  
        ++lengths[c];
    } 
    
    for (i = 0; i < LENGTH; ++i) {
        printf("%c " , i);
            for (j = 0; j < lengths[i] ; ++j) {
                printf("X ");
            } 
        printf("\n");
    }
}
