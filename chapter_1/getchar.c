#include <stdio.h> 

main () {

    //C might hold EOF and so you need a large enough data type
    int c; 

    while ((c = getchar()) != EOF) {
        putchar(c);
    }

}
