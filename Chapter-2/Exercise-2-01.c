#include <stdio.h>
#include <limits.h>

// determine the ranges of char, short, int, and long variables, both signed and unsigned, by printing appropriate values from standard headers and by direct computation.
int main()
{
    // from standard headers
    printf("Range of signed char: %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("Range of unsigned char: 0 to %d\n", UCHAR_MAX);
    printf("Range of signed short: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("Range of unsigned short: 0 to %d\n", USHRT_MAX);
    printf("Range of signed int: %d to %d\n", INT_MIN, INT_MAX);
    printf("Range of unsigned int: 0 to %u\n", UINT_MAX);
    printf("Range of signed long: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("Range of unsigned long: 0 to %lu\n", ULONG_MAX);

    putchar('\n');
    // from direct computation
    // need some knowedge about bitwise operation, which will be covered in section 2.9
    printf("Range of signed char: %d to %d\n", (char) ~((unsigned char) ~0 >> 1), (char)((unsigned char) ~0 >> 1));
    printf("Range of unsigned char: 0 to %d\n", (unsigned char) ~0);
    printf("Range of signed short: %d to %d\n", (short) ~((unsigned short) ~0 >> 1), (short)((unsigned short) ~0 >> 1));
    printf("Range of unsigned short: 0 to %d\n", (unsigned short) ~0);
    printf("Range of signed int: %d to %d\n", (int) ~((unsigned int) ~0 >> 1), (int)((unsigned int) ~0 >> 1));
    printf("Range of unsigned int: 0 to %u\n", (unsigned int) ~0);
    printf("Range of signed long: %ld to %ld\n", (long) ~((unsigned long) ~0 >> 1), (long)((unsigned long) ~0 >> 1));
    printf("Range of unsigned long: 0 to %lu\n", (unsigned long) ~0);
    return 0;
}