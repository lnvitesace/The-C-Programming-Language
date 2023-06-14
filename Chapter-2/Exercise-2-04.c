// write an alternative version of squeeze(s1, s2) that deletes each character in s1 that matches any character in the string s2.
void squeeze(char s1[], char s2[])
{
    int i, j;
    int match;
    for (i = j = 0; s1[i] != '\0'; ++i) {
        match = 0;
        // if s1[i] matches any character in s2, then match = 1
        for (int k = 0; s2[k] != '\0'; ++k)
            if (s1[i] == s2[k])
                match = 1;
        if (!match)
            s1[j++] = s1[i];
    }
    s1[j] = '\0';
}