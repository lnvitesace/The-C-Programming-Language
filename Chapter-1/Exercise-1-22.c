#include <stdio.h>

#define MAXCOL 10

// "fold" long input lines into two or more shorter lines after the last non-blank character that occurs before the n-th column of input.
int main()
{
    int c;
    int already_printed = 0;

    for (int i = 0; i < MAXCOL && (c = getchar()) != '\n' ; ++i)
        if (c == ' ' || c == '\t') {
            if (!already_printed) {
                putchar('\n');
                already_printed = 1;
            }
        } else {
            putchar(c);
            already_printed = 0;
        }
    while ((c = getchar()) != '\n')
        putchar(c);
    putchar('\n');
    return 0;
}