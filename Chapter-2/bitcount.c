//Counts the number of bits in an integer

#include <stdio.h>

int bitcount (unsigned short x);

int main() {

    unsigned short x = 2;
    printf("bitcount(%d) = %d", x , bitcount(x));
}

int bitcount (unsigned short x){
    int n;
    for (n=0; x!=0; x>>=1) {
        if (x & 1) {
            ++n; 
        }
    }
    return n;
}

