#include <stdio.h>

#define MAXLINE 1000
#define LIM 80

int getline1(char line[], int maxline);

// print all input lines that are longer than 80 characters.
int main()
{
    int len;
    char line[MAXLINE];

    while ((len = getline1(line, MAXLINE)) > 0)
        if (len > LIM) 
            printf("%s", line);
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