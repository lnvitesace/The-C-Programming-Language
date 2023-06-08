#include <stdio.h>

#define MAXLINE 1000

int getline1(char line[], int maxline);

// check a C program for rudimentary syntax errors like unbalanced parentheses, brackets and braces.
int main()
{
    int len = 0;
    int brace = 0, bracket = 0, parentheses = 0;
    int s_quote = 1, d_quote = 1;
    int multi_comment = 0;

    char line[MAXLINE];

    while ((len = getline1(line, MAXLINE)) > 0)
        for (int i = 0; i < len; ++i) {
            if (line[i] == '(')
                ++parentheses;
            if (line[i] == ')')
                --parentheses;
            if (line[i] == '[')
                ++bracket;
            if (line[i] == ']')
                --bracket;
            if (line[i] == '{')
                ++brace;
            if (line[i] == '}')
                --brace;
            if (line[i] == '\'')
                s_quote *= -1;
            if (line[i] == '\"')
                d_quote *= -1;
            if (line[i] == '/')
                if (line[i + 1] == '*')
                    ++multi_comment;
            if (line[i] == '*')
                if (line[i + 1] == '/')
                    --multi_comment;
        }
    if (d_quote != 1)
        printf("Mismatching double quote mark\n");
    if (s_quote != 1)
        printf("Mismatching single quote mark\n");
    if (parentheses != 0)
        printf("Mismatching parenthesis\n");
    if (brace != 0)
        printf("Mismatching brace mark\n");
    if (bracket != 0)
        printf("Mismatching bracket mark\n");
    if (multi_comment != 0)
        printf("Mismatching multi-line comment mark\n");
    if (bracket == 0 && brace == 0 && parentheses == 0 && s_quote == 1 && d_quote == 1 && multi_comment == 0)
        printf("Syntax is correct.\n");
    return 0;
}

int getline1(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

// this program is not totally correct. For instance, it will not detect the following error: ")(", "]["

// to implement a complete program, we need to use advanced data structures like stack, queue, etc.