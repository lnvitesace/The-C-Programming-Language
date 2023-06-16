// write a function expand(s1, s2) that expands shorthand notations like a-z in the string s1 into the equivalent complete list abc...xyz in s2.
// assume that s2 is large enough to hold the expansion of s1.
void expand(char s1[], char s2[])
{
    int i, j, k;

    for (i = j = 0; s1[i] != '\0'; ++i)
        if (s1[i] == '-' && i > 0 && s1[i + 1] != '\0')
            for (k = s1[i - 1] + 1; k < s1[i + 1]; ++k)
                s2[j++] = k;
        else
            s2[j++] = s1[i];
    s2[j] = '\0';
}