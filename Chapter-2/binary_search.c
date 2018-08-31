//Binary Search
//Decides is a particular value x occurs in the sorted array v
//The elements of v must be in increasing order 
//The function returns the position is x occurs in v and -1 if not

/*binsearch: find x in v[0] <= v[1] <= ... <= v[n-1] */

#define SIZE 10

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

    int low, high, mid, value;

    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low+high)/2;
        if (x < v[mid]) {
            high = mid + 1;
        } else if (x > v[mid]) {
            low = mid + 1;
        } else /*found match */ {
            return mid;
        }
    }
    return -1; /* no match */
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
}
