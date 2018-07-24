//Bit conversion program 
//<<EASY>> Convert a string of bits into an integer number 

#include <stdio.h>

#define MAX 1000

int bit2int (char bits[]);
void take_input(char input[]);
int power(int a, int b);

int main () {
    char string[MAX];
    take_input(string);
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

//Takes in an input and stores it into an array
void take_input(char input[]) {
    printf("Please enter your values:\n"); 
    int c;
    int i = 0;
    while ((c=getchar())!=EOF) {
        input[i] = c;
        ++i;
    }
    input[i] = '\0';
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
