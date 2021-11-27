/*
    Iteration
the while statement
    while (express)   
        statement 

        Semantics 
    expression is 0
    skip to next statement 
    expression is not 0
    execute
        repeat
eg.
    while (i<10)
    {
        printf("i = %d", i)
        i++;
    }
*/    

#include <stdio.h>
int main()
{
    int i = 0;
    while (i<10)
    {
        printf("%d\n", i);
        i++;
    }
    
}