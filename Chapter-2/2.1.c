//Find the ranges of the values 
//Useful as a guide for your machine

#include <limits.h>
#include <stdio.h>

int main () {
    int character_minimum = CHAR_MIN;
    int character_maximum = CHAR_MAX;
    int int_minimum = INT_MIN;
    int int_maximum = INT_MAX;
    long long_maximum = LONG_MAX;
    long long_minimum = LONG_MIN;
    int signedc_max = SCHAR_MAX;
    int signedc_min = SCHAR_MIN;
    short short_max = SHRT_MAX;
    short short_min = SHRT_MIN;
    int unsingedc_max = UCHAR_MAX;
    int unsignedint_max = UINT_MAX;
    long unsignedlong_max= ULONG_MAX;
    short unsignedshort_max= USHRT_MAX;
    
    printf("The minimum value of the char is %d\n", character_minimum);
    printf("The maximum value of the char is %d\n", character_maximum);
    printf("The minimum value of the int is %d\n", int_minimum);
    printf("The maximum value of the int is %d\n", int_maximum);
    printf("The minimum value of the long is %ld\n", long_minimum);
    printf("The maximum value of the long is %ld\n", long_minimum); 
    printf("The minimum value of the signed char is %d\n", signedc_max);
    printf("The maximum value of the signed char is %d\n", signedc_max);
    printf("The maximum value of a short is %d\n", short_max);
    printf("The minimum value of a short is %d\n", short_min);
    printf("The maximum value of an unsigned char is %d\n", unsingedc_max);
    printf("The maximum value of an unsigned long is %d\n", unsignedint_max);
    printf("The maximum value of an unsigned short is %d\n", unsignedshort_max);
}
