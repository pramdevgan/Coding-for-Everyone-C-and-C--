/*
SIN function in the C programming language
Author: Pramatma Vishwakarma
Date: 27/11/2021
*/

#include <math.h> // MATH library functions to calculate sin value
#include <stdio.h>
#define PI 3.14159
int main()
{
    double sinValue, X;
    printf("Enter the value to calculate sine:\n");
    scanf("%lf", &X);

    X = X * (PI / 180);
    sinValue =sin(X);

    printf("\n The sine value of %lf = %lf\n", X, sinValue);
    return 0;
}