//Bit conversion program 
//<<EASY>> Convert a string of bits into an integer number 

#include <stdio.h>

#define MAX 1000

int bit2int (char bits[]);
int power(int a, int b);

int main () {
    char string[MAX] = "1001";
    printf("%s  = %d\n",string, bit2int(string));
}

//Convert a character string of bits into an integer
int bit2int (char bits[]) {
   //Navigate to the last digit
   int i,j,n,a;
    for (i=j=n=0; bits[i]!='\0'; ++i) {
        ; 
    }
    --i;
    /*printf("%d\n", i);*/

    while(i >= 0) {
        if (bits[i] == '1') {
            a = 2;
        } else if (bits[i] == '0') {
            a = 0;    
        } else {  //Try to remove any broken characters
            while(bits[i] != '1' && bits[i] != '0') {
                --i;
            }
        } 
        n = n + power(a,j);
        /*printf("The current index of j is %d\n", j);*/
        /*printf("The current value of n is %d\n", n);*/
        --i;
        ++j;
    }
    return n;
}

// a ^ b
int power(int a, int b) {
    int n,i;
    if (a == 0) {
        n = 0;
    } else {
        n = 1; 
    }
    for (i=0; i < b ; ++i) {
        n = n * a; 
    }
    return n;
}
