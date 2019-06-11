
#include <stdio.h> 

#define UPPER_LIMIT 300
#define LOWER_LIMIT 0
#define STEP 20

/* print Celsius - Farhenheight table 
   for fahr = 0, 20, ..., 300 */

float celToFahrConv (float celsius);

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
        fahr = celToFahrConv(celsius);
        printf("%3.0f\t|\t%6.1f\n", celsius, fahr);
        celsius+=step; 
    }

}

float celToFahrConv (float celsius) { 
    return ((9.0/5.0) * (celsius + 32));
}

