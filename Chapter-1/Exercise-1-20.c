#include <stdio.h>

#define TABINC 4

// replaces tabs in the input with the proper number of blanks to space to the next tab stop.
int main()
{
    int c;
    while ((c = getchar()) != EOF)
        if (c == '\t')
            for (int i = 0; i < TABINC; ++i)
                putchar(' ');
        else
            putchar(c);
    return 0;
}

// Q: Assume a fixed set of tab stops, say every n columns. Should n be a variable or a symbolic parameter?

// A: n should be a symbolic parameter.