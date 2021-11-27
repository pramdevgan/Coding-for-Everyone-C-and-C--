#include <stdio.h>
int main()
{
    int speed;
    printf("Enter the speed as integer: \n");
    scanf("%d",&speed);
    if (speed < 65)
       printf("\n No Speed Ticket \n\n");
    else
        printf("\n Speed Ticket \n\n");
    return 0;
}

/*
    USE OF IF-ELSE

    if (expression)
        statement
    else
        statement


    (Expression)
    ZERO -----> "False"
    NON-ZRO ----> "TRUE"

 What if wanted 65 to be legal
    (speed <=65)


Relational Operators
    <, >, <=, >=, <=
    Precedence 
    Below with oposite 
        + - % * /
*/

int main()
{
    int a = 9, b = 10;
    if (a -b< 0)
        printf("True");
    else if (a -b > 0)
        printf("False");
    else 
        printf("Neither");
}