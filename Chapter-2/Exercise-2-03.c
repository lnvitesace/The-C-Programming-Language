#include <ctype.h>

// write a function htoi(s), which converts a string of hexadecimal digits (including an optional 0x or 0X) into its equivalent integer value.
int htoi(char s[])
{
    int result = 0;
    int i = 0;

    // Skip optional 0x or 0X prefix
    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
        i = 2;

    // Process each character in the string
    while (s[i] != '\0') {
        int digit;
        if (isdigit(s[i]))
            digit = s[i] - '0';
        else if (isxdigit(s[i]))
            digit = tolower(s[i]) - 'a' + 10;
        else
            return 0;

        result = result * 16 + digit;
        ++i;
    }
    return result;
}