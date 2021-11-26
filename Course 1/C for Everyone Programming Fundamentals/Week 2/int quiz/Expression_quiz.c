#include <stdio.h>
int main()
{
    int a, b, c, answer;
    a = 3;
    b = 4;
    c = -2;
    // Q1----> What is the value of a + b? =7
                    // answer = a+b;
    // Q2----> What is the value of -a+b?
                    // answer = - a + b;
    // Q3----> What is the value of ++a +c?
                    // answer =++a + c;
    // Q4 ----> What is the value of a/b?
                    // answer = a/b;
    // Q5 ----> What is the value of b/a?
                    // answer = b/a;
    // Q6----> What is the value of ++a + b++? 
                    answer = ++a + b++;

printf("a + b =%d", answer);
}