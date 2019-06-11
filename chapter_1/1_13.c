//Write a rogram to print a histogram of the lengths of words in its input 
#include <stdio.h> 

#define LENGTH 20

main () { 
   
    
    int c, i, j, length;
    int lengths[LENGTH]; 

    //initialzing the array with 0
    for (i = 0; i < LENGTH; ++i) {
        lengths[i] = 0;
    }
   
    length = 0;
    while ((c = getchar()) != EOF) { 
        //Count the length of a word
        if (c == ' ' || c == '\n' || c == '\t') {
            ++lengths[length]; 
            length = 0;
        } else { 
            ++length;
        }
        
    }  

    for (i = 0; i < LENGTH; ++i) {
        printf("%d ", i);
            for (j = 0; j < lengths[i] ; ++j) {
                printf("X ");
            }
        printf("\n");
    }
    
}

