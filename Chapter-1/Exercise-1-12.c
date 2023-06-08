#include <stdio.h>

#define OUT 0
#define IN 1

// print input one word per line
int main()
{
    int c;
    int state;

    while ((c = getchar()) != EOF)
        if (c != ' ' && c != '\t' && c != '\n') {
            putchar(c);
            state = IN;
        }
        else if (state) {
            putchar('\n');
            state = OUT;
        }
}