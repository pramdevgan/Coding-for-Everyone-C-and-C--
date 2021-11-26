/* The data type int (short, long or unsigned)

typical modern machines int stored in 32 bits (4 bytes)

with a range of -2147483648
                 2147483647
Others int's
    short
    long
    unsigned
important when your output/input 
    mix types
    classic 
    2/3 is 0
    2.0/3 is 0.6666
                 */
#include <stdio.h>
int main()
{
    short short_a = 5;
    int noraml_a = 67;
    unsigned unsigned_a = 67u;
    long long_a = 67l;
    printf("Shrt_a = %hd, devide by int 2 is %d\n", short_a,short_a/2);
    printf("short a = %hd, devide by float 2 is %lf\n", short_a, short_a/2.0);
    printf("67 as a char is %c\n",noraml_a);
    printf("size in bytes of short, int, unsigned, and long on my machine:");
    printf("%lu,%lu,%lu\n", sizeof(short_a), sizeof(noraml_a),sizeof(unsigned_a), sizeof(long_a));
    return 0;
}               