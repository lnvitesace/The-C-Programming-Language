#include <stdio.h>

#define MAXLINE 1000
#define LIM 80

int getline1(char line[], int maxline);
void reverse(char line[], int len);

// Write a function reverse(s) that reverses the character string s. Use it to write a program that reverses its input a line at a time.
int main()
{
    int len;
    char line[MAXLINE];

    while ((len = getline1(line, MAXLINE)) > 0) {
        reverse(line, len);
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

void reverse(char line[], int len)
{
    for (int i = 0; i < len / 2;++i) {
        char temp = line[i];
        line[i] = line[len - i - 2];
        line[len - i - 2] = temp;
    }
}