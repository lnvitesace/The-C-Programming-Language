// write the function itob(n, s, b) that converts the integer n into a base b character representation in the string s.
void reverse(char line[], int len);

void itob(int n, char s[], int b)
{
    int i, sign, temp;

    i = 0;
    sign = n;
    do {
        temp = n % b;
        temp = temp < 0 ? -temp : temp;
        if (temp > 9)
            s[i++] = temp - 10 + 'a';
        else
            s[i++] = temp + '0';
    } while ((n /= b) != 0);
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