#include <stdio.h>

// remove all comments from a C program. Don't forget to handle quoted strings and character constants properly. C comments do not nest.
int main()
{
    int c;
    int next_c;
    int in_comment = 0;

    while ((c = getchar()) != EOF)
        if (!in_comment) {
            if (c == '/') {
                next_c = getchar();
                if (next_c == '/')
                    // read the rest of the line
                    while ((c = getchar()) != '\n' && c != EOF)
                        ;
                else if (next_c == '*')
                    // start the comment
                    in_comment = 1;
                else {
                    putchar(c);
                    putchar(next_c);
                }
            }
            else
                putchar(c);
        }
        else {
            if (c == '*') {
                next_c = getchar();
                if (next_c == '/') {
                    // end the comment
                    in_comment = 0;
                    c = getchar();
                }
            }
        }
    return 0;
}