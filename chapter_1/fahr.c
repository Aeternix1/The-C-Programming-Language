//Fahrenheight Program 


#include <stdio.h> 

#define UPPER_LIMIT 300
#define LOWER_LIMIT 0
#define STEP 20

/* print Fahrenheit-Celsius table 
   for fahr = 0, 20, ..., 300 */

main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = LOWER_LIMIT;      /* lower limit of temperature */
    upper = UPPER_LIMIT;    /* upper limit */

    fahr = lower; 
    printf("Fahrenheight Celsius\n");
    for (fahr = UPPER_LIMIT; fahr >= LOWER_LIMIT ;fahr+=(-1*STEP)) {
        printf("%3.0f\t|\t%6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
    }

}

