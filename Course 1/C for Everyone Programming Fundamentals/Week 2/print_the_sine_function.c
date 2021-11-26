#include <math.h>
#include <stdio.h>
int main(void)
{
    double sinValue, X;
    printf("Enter the value of calculate sine:\n");
    scanf("%f", &X);

    sinValue =sin(X);

    printf("\n The sine value of %lf = %lf\n", X, sinValue);
}