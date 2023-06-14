// Q: In a two's complement number system, x &= (x-1) deletes the rightmost 1-bit in x. Explain why.
// A: In a two's complement number system, x - 1 will flip all the bits from the rightmost 1-bit to the least significant bit, and flip the rightmost 1-bit to 0. For example, 0110 - 1 = 0101, 0111 - 1 = 0110, 1000 - 1 = 0111. Then x &= (x - 1) will flip all the bits from the rightmost 1-bit to the least significant bit, and flip the rightmost 1-bit to 0, and flip the rightmost 0-bit to 1. For example, 0110 & 0101 = 0100, 0111 & 0110 = 0110, 1000 & 0111 = 0000. 

// Use this observation to write a faster version of bitcount.
int bitcount(unsigned x)
{
    int b;
    for (b = 0; x != 0; ++b)
        x &= (x - 1);
    return b;
}