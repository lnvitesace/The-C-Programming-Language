#include <stdio.h>

// Write a loop equivalent to the for loop above without using && or ||.
int main()
{
    char s[100];
    int i, lim;
    int c;

    for (i = 0; i < lim - 1; ++i)
        if ((c = getchar()) != EOF)
            if (c != '\n')
                s[i] = c;
}