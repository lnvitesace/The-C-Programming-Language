#include <stdio.h>

#define MAXLINE 1000
#define LIM 80

int getline1(char line[], int maxline);
void remove_trailing_blanks(char line[], int len);

// remove trailing blanks and tabs from each line of input, and to delete entirely blank lines.
int main()
{
    int len;
    char line[MAXLINE];

    while ((len = getline1(line, MAXLINE)) > 0) {
        remove_trailing_blanks(line, len);
        printf("%s", line);
    }
    return 0;
}


int getline1(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim -1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i; 
    }
    s[i] = '\0';
    return i;
}

void remove_trailing_blanks(char line[], int len)
{
    int i;

    for (i = len - 2; i >= 0 && line[i] == ' ' && line[i] == '\t'; --i)
        ;
    line[i + 1] = '\n';
    line[i + 2] = '\0';
}