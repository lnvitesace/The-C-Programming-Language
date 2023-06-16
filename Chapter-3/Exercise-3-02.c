// write a function escape(s, t) that converts characters like newline and tab into visible escape sequences like \n and \t as it copies the string t to s.
// assume that s has enough space to hold the expanded string.
void escape(char s[], char t[])
{
    int i, j;

    for (i = j = 0; t[j] != '\0'; ++i, ++j) // the comma operator will be covered in Chapter 3.5
        switch (t[j]) {
        case '\n':
            s[i] = '\\';
            s[++i] = 'n';
            break;
        case '\t':
            s[i] = '\\';
            s[++i] = 't';
            break;
        default:
            s[i] = t[j];
            break;
        }
    s[i] = '\0';
}