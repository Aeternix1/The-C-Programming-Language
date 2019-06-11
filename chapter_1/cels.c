
#include <stdio.h> 

#define UPPER_LIMIT 300
#define LOWER_LIMIT 0
#define STEP 20

/* print Celsius - Farhenheight table 
   for fahr = 0, 20, ..., 300 */

main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = LOWER_LIMIT;      /* lower limit of temperature */
    upper = UPPER_LIMIT;    /* upper limit */
    step = STEP;      /* step size */

    celsius = lower; 
    printf("Celsius Fahrenheight\n");
    printf("__________________________\n");
    while (celsius <= upper) {
        fahr = (9.0/5.0) * (celsius + 32);
        printf("%3.0f\t|\t%6.1f\n", celsius, fahr);
        celsius+=step; 
    }

}

