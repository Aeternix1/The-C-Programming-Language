//A file to do some practice using bitwise operations

#include <stdio.h>

int is_in_use (char in_use, int n);
char set_in_use (char in_use, int n);
char set_off (char in_use, int n);

unsigned int getbits(unsigned int x, int p, int n);
void setbits(unsigned char x, int p, int n, int y);

int main () {
    
    //Basic stuff
    /*char car = 1;*/
    /*int position = 0;*/
    /*printf("%d\n", is_in_use(car, position));*/
    /*car = set_in_use(car, 3);*/
    /*printf("%d\n", car);*/
    /*car = set_off (car, 3);*/
    /*printf("%d\n", car);*/

    unsigned char x = 175;
    int p = 3;
    int n = 3;
    int y = 7;

    //printf("getbits(%d, %d, %d) = %d\n", x, p, n, getbits(x,p,n));
    //printf("%d\n", x);
    setbits(x, p, n, y);
}

int is_in_use (char in_use, int n) {
    return in_use & 1 << n;
}

char set_in_use (char in_use, int n) {
    in_use = in_use|1<<n;
    return in_use;
}

char set_off (char in_use, int n) {
    in_use = in_use & ~(1<<n);
    return in_use;
}

//Getbits function, returns the values at an n position 
unsigned int getbits(unsigned int x, int p, int n) {
    return (x >> (p+1-n)) & ~(~0 << n); 
}

//Setbits, sets p-n bits to y-n bits leaving all other bits unchanged
void setbits(unsigned char x, int p, int n, int y) {

    //Run getshift to get the value to the end of the line 
    unsigned char a = (x >> (y+1-n)) & ~(~0 << n);   
    printf("%d\n", a);

    //Set to 0 values between x  & n
    int counter = n;
    int position = p;
    while (counter > 0) {
        x = set_off(x,position);
        --position;
        --counter;
    }
    printf("%d\n", x);

    //Move the getbits version to p index
    a = a << (p+1-n);
    printf("%d\n", a);

    //Or the two variables together
    printf("%d\n", a|x);

}
