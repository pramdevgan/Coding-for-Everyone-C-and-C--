#include <stdio.h>
int main()
{
    int outside, weather;
    printf("\n Enter if outside 1 true 0 false:\n");
    scanf("%d", &outside);
    printf("\n Enter if raining 1 true 0 false:\n");
    scanf("%d", &weather);
    if (outside && weather)
        printf("\n Please Use an Umbrella.\n");
    else
        printf("\n Dress normally.\n\n");        
    
}


/*
    How to evaluate A && B
    In logic there are four cases.            result
    The A can be true, the B can be true.       T
    The A can be true, the b can be false.      F
    The A can be false, the B can be true.      F
    This is what's called a truth table,        F
    and finally both arguments are false.       F
*/
