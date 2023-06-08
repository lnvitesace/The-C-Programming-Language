#include <stdio.h>

// copy input to output, replacing each string of one or more blanks by a single blank
int main()
{
    int c;
    int before_c;

    while ((c = getchar()) != EOF) {
        if (c != ' ' || before_c != ' ')
            putchar(c);
        before_c = c;
    }
}