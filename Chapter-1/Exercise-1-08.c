#include <stdio.h>

// count blanks, tabs, and newlines
int main()
{
    int blanks, tabs, newlines;
    int c;

    blanks = 0;
    tabs = 0;
    newlines = 0;
    while ((c = getchar()) != EOF)
        if (c == ' ')
            ++blanks;
        else if (c == '\t')
            ++tabs;
        else if (c == '\n')
            ++newlines;
    printf("Blanks: %d\nTabs: %d\nNewlines: %d\n", blanks, tabs, newlines);
}