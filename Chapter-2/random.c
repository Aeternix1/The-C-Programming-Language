//File housing random calculations and useful functions


#include <stdio.h>
#include <math.h>

int power(int a, int b);

int main ()  {

    int a = 5;
    int b = 3;
    printf("%d ^ %d = %d",a, b, power(a,b));
    
    return 0;
}

int power(int a, int b) {
    int n,i;
    if (a == 0 ) {
        n = 0;
    } else {
        n = 1; 
    }
    for (i=0; i < b ; ++i) {
        n = n * a; 
    }
    return n;
}
