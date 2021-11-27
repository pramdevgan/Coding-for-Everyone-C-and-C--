/*SIN function in the C programming language*/

#include <math.h> // MATH library functions to calculate sin value
#include <stdio.h>
int main()
{
    double sinValue, X;
    printf("Enter the value to calculate sine:\n");
    scanf("%lf", &X);

    sinValue =sin(X);

    printf("\n The sine value of %lf = %lf\n", X, sinValue);
    return 0;
}