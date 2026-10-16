#include <stdio.h>

int main()
{
    int c;
    int A = 0, B = 0;

//Ei loop space bad diye first digit er kache jay.
    while ((c = getchar()) == ' ' || c == '\n')
    {
    }

//Eta first number porche.
    while (c >= '0' && c <= '9')
    {
        A = c - '0'; //character digit ke normal number e convert kore.
        c = getchar();
    }

//Eta dui number er majher gap skip kore.
    while (c == ' ' || c == '\n')
    {
        c = getchar();
    }

//Eta second number er same kaj kore.
    while (c >= '0' && c <= '9')
    {
        B = c - '0'; //character digit ke normal number e convert kore.
        c = getchar();
    }


    if ((A + B) % 2 == 0)
        printf("Black");
    else
        printf("White");
}
