//Some bitwise operation practice

#include <stdio.h>

unsigned short getbits(unsigned short x, int p, int n);

int main () {
    int x = 8, p = 3, n = 3;
    int z = getbits(x,p,n);
    printf("getbits(%u, %d, %d) = %u\n",x,p,n,z);
}

/*getbits; get n bits from position p */
unsigned short getbits(unsigned short x, int p, int n) {
    return (x >> (p+1-n)) & ~(~0 << n);
}


