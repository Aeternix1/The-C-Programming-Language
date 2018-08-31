//3.1 Binary search makes one test inside the loop (at the price of more tests
//Outside. Write a version with only one test inside the loop and measure the
//difference in runtime.

#include <stdio.h>


int binsearch(int x, int v[], int n);
void makearray(int v[], int size);

int main() {
    
    int array[SIZE];
    makearray(array, SIZE);
    int x = 1.5;
    printf("%d\n",x);

    printf("Upper half %d\n", binsearch(120, array, SIZE));
    printf("Not in array > range %d\n", binsearch(200, array, SIZE));
    printf("Small in range %d\n", binsearch(20, array, SIZE));
    printf("Not in array < range %d\n", binsearch(170, array, SIZE));
    printf("Too small %d\n", binsearch(-10, array, SIZE));
}
int binsearch(int x, int v[], int n) {
   
    int low, high, mid;
    
    low = 0;
    high = n - 1;
    
    while (low <= high) {
        mid = (low+high)/2;
    }
}

void makearray(int v[], int size) {

    int i;
    int c=0;

    for(i=0; i<size; ++i) {
        v[i] = c; 
        printf("%d ", v[i]);
        c+=20;
    }
    printf("\n");
