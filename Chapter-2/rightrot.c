//Write a function rightrot(x,n) that returns the value of the intger x
//rotated to the right by n positions


#include <stdio.h>

unsigned char rightrot(unsigned char x, int n);
int main () {

//printf("%ld\n", sizeof(int));
//printf("%ld\n", sizeof(char));

char x = 255;
int n =  8;
printf("rightrot(%d,%d) = %d\n", x, n, rightrot(x,n));

}

unsigned char rightrot(unsigned char x, int n) {
    unsigned char a;
    unsigned char y;
    while (n > 0) {
        a = 1;
        y = a & x;
        y = y << 7;
        x = x >> 1;
        x = x|y;
        --n;
    }
    return x;
}


