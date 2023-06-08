#include <stdio.h>

// print the value of EOF
int main()
{
    printf("%d\n", getchar() != EOF);
}

// Note: On Windows the EOF char is accessible with CTRL+Z, while on Unix like systems the EOF char is accessible with CTRL+D.