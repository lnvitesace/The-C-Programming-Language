// write a version of itoa that accepts three arguments instead of two.
// the third argument is a minimum field width; the converted number must be padded with blanks on the left if necessary to make it wide enough.
void reverse(char line[], int len);

void itoa(int n, char s[], int w)
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
    // above is the same as Exercise-3-04.c

    if (i < w)
        for (; i < w; ++i)
            s[i] = ' ';
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