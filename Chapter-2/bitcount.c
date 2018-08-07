//Counts the number of bits in an integer

#include <stdio.h>

int bitcount (unsigned short x);

int main() {

    unsigned short x = 1;
    printf("bitcount(%d) = %d", x , bitcount(x));
}

int bitcount (unsigned short x){
    int n;
    while((x=x&(x-1))!=0) {
        if (x & 1) {
            ++n; 
        }
    }
    } 
    return n;
}

