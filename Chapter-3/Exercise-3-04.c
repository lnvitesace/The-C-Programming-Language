/* Q: In a two's complement number representation,
    our version of itoa does not handle the largest number,
    that is, the value of n equal to -(2^(wordsize-1)).
    Explain why not.*/

/* A: Because in two's complement, +(2^(wordsize-1)) is not exist.
    So in "if" statement, you can't make it positive. Its negative number is itself.*/

// Modify it to print that value correctly, regardless of the machine on which it runs.
void reverse(char line[], int len);

void itoa(int n, char s[])
{
    int i, sign, temp;

    i = 0;
    sign = n;
    do {
        temp = n % 10;
        temp = temp < 0 ? -temp : temp;
        s[i++] = temp + '0';
    } while ((n /= 10) != 0);
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s, i + 1);
}

void reverse(char line[], int len) // Exercise-1-19
{
    for (int i = 0; i < len / 2; ++i)
    {
        char temp = line[i];
        line[i] = line[len - i - 2];
        line[len - i - 2] = temp;
    }
}