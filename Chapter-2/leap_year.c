//Leap year program 
//A year is a leap year if it is divisible by 4 but not by 100
//except that years divisible by 400 are NOT leap years
//Write a program that takes in the input from a user and checks whether the
//number is an integer

#include <stdio.h>

int main () {
    int leap;
    printf("Please enter a number: \n");
    scanf("%d",&leap);  
    if ((leap%4==0 && leap%100!=0) || (leap%400==0)) {
        printf("The number is a leap year"); 
    } else {
        printf("The number is not a leap year");
    }
    return 0;   
}
