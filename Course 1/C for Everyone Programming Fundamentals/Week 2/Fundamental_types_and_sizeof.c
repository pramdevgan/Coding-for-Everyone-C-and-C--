#include <stdio.h>
int main()
{
    int a=5,b=6,c=7; /*declare and initialize*/
    double average = 0.0; /*good practice*/
    char ch = 'e';
    printf("on my system\n");
    printf("int is %ld bytes. \n", sizeof(int));
    printf("long int is %lu bytes. \n", sizeof(long int));
    printf("char is %lu bytes. \n", sizeof(ch));
    printf("float is %lu bytes.\n", sizeof(float));
    printf("double is %lu bytes.\n", sizeof(double));
    printf("long double is %lu bytes.\n", sizeof(long double));
    return 0;
    
}