#include <stdio.h>  
 int main(void) {
    int  miles = 26, yards = 385;
    int kilometers;
    kilometers = 1.609 * (miles + yards/1760.0);
    printf("\nA marathon is %d kilometers.\n", kilometers);
    return 0;
 }  

 /*Question 2
 
Why do we use the format specifier %d instead of %lf?  

lf (as in %lf, not "if") is a double and the int answer would print incorrectly.  

We did not need double precision.  

The program would loop infinitely.

*/