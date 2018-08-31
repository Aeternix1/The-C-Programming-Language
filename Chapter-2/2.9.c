//Create a faster version of the bitcount software using the following:
//x=x&(x-1) [this software removes all of the bits in a line of code


#include <stdio.h>

int main () {
    
    int x = 10;
    int n;
    printf("The size of a character in bits is %lu\n", sizeof(x)*8);
   
    for (n=0; x!=0; x=x&(x-1)) {
        ++n;
    }
    
    printf("The number of bits is %d\n", n);
}



