//Write a function rightrot(x,n) that returns the value of the intger x
//rotated to the right by n positions


#include <stdio.h>

unsigned char rightrot(unsigned char x, int n);
int main () {

printf("%ld\n", sizeof(int));
printf("%ld\n", sizeof(char));

int x = 255;
int n =  8;
printf("rightrot(%d,%d) = %d\n", x, n, rightrot(x,n));

}

unsigned char rightrot(unsigned char x, int n) {
    unsigned char a;
    unsigned char y;

    while (n > 0) {
        a = 1;
        y = a & x;
        printf("a & x = %d\n", y);
        y = y << 7;
        printf("y<<7 = %d\n", y);
        x = x >> 1;
        printf("x>>1 = %d\n", x);
        x = x|y;
        printf("x|y = %d\n", x);
        --n;
    }
    return x;
}


