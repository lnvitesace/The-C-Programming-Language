#include <stdio.h>

#define TABINC 4

// replaces strings of blanks by the minimum number of tabs and blanks to achieve the same spacing. Use the same tab stops as for detab.
int main()
{
    int c;
    int nb = 0;
    while ((c = getchar()) != EOF)
        if (c == ' ') {
            ++nb;
            if (nb == TABINC) {
                nb = 0;
                putchar('\t');
            }
        } else {
            for (; nb > 0; --nb)
                putchar(' ');
            putchar(c);
        }
    return 0;
}

// Q: When either a tab or a single blank would suffice to reach a tab stop, which should be given preference?

// A: A single blank should be given preference.