//Bit conversion program 
//<<EASY>> Convert a string of bits into an integer number 

#include <stdio.h>

#define FALSE 0
#define TRUE !(FALSE)

#define MAX 1000

int power(int a, int b);
int bit2int (char bits[]);
int int2int (char integer[]);
void int2bit (int integer, char bits[]);
void take_input(char input[]);

int main () {

    /*char string[MAX];*/
    /*printf("(1)Binary to Integer or (2) Integer to Binary\n");*/
    /*int c=getchar();*/
    /*if (c == '1') {*/
        /*take_input(string);*/
        /*printf("%s = %d\n",string, bit2int(string));*/

    /*} else if (c == '2') {*/
        /*take_input(string);*/
        /*printf("The integer value is %d\n", int2int(string));*/
        /*printf("The corresponding binary value is %s",int2bit();*/

    //Need to test that int to int is working 
    char string[MAX] = "15";
    int integer = int2int(string);
    int2bit(integer, string);
    printf("%d = %s\n",integer, string);
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

//Converts the character input into an integer
int int2int (char integer[]) {
    int i,n;
    for (i=n=0; integer[i] != '\0'; ++i)  {
        //Each additional decimal place means we need to multiply through by 10
        n = n*10 + (integer[i] - '0');
    }
    return n;
}

//Converts an integer into character array of binary numbers
void int2bit (int integer, char bits[]) {
    int i, dummy;
    dummy = integer;
    //Need to count the number of required index values for the binary number
    for (i=0; dummy!=0 ; ++i) {
        dummy = dummy/2;
    }
    //Place the null terminator at the end
    bits[i] = '\0';
    //Takes the modulus and stores it in the corresponding array register
    //Back to front using the traditional binary to hex conversion
    for (--i; integer!=0; --i) {
        bits[i] = integer%2 + '0'; 
        printf("%d\n", integer%2);
        integer=integer/2;
    }
    
}

//Takes in an input and stores it into an array
void take_input(char input[]) {
    printf("Please enter your values:\n"); 
    int c;
    int i = 0;
    while ((c=getchar())!='\n') {
        if (c >= '0' && c <= '9') {
            input[i] = c;
            ++i;
        }
    }
    input[i] = '\0';
}
