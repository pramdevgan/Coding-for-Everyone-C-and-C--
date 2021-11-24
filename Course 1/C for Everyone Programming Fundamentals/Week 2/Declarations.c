#include <stdio.h>

int main()
{
    int a=5, b=6,c=8; /*declare and initialize*/
    double average=0;
    printf("a =%d, b =%d, c = %d\n",a,b,c);
    average = (a+b+c)/3.0;
    printf ("The Average of a, b and c = %lf\n",average);
}