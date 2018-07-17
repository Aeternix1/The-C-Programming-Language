//Making a little birthday program to learn about how to use Enum

#include <stdio.h>

enum months {JAN=1,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC};

#define DATE 10


int main () { 
    
    int date[DATE];  
    int c,i;
    i=0;
    //When is your birthday?
    printf("Please enter the date of your birthday DD-MM-YYYY\n");
   
    while (c=getchar()!=EOF && i<10) {
        date[i] = c;
        ++i;      
    }
    date[i] = '\0';

}    
