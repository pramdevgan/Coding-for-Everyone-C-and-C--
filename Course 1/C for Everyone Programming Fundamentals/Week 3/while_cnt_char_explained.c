#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int blanks = 0, digits = 0, letters = 0, Others = 0;
    int c; // use for int value of character
    while ((c = getchar()) != EOF)
    /*
        The while loop expression

      while((c = getchar()) !=  EOF)

    is used to read a char from the input  until it sees the special value defined EOF.
    */
    {
        if (c == ' ')
            ++blanks;
        else if (c >= '0' && c <= '9')
            ++digits;
        else if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
            ++letters;
        else
            ++Others;            
    }

    printf("Blank = %d, digits = %d, letters = %d",blanks,digits,letters);
    printf(" Others = %d\n\n",Others);
    return 0;
}