// write a function rightrot(x, n) that returns the value of the integer x rotated to the right by n positions.
unsigned rightrot(unsigned x, int n)
{
    // create a mask with n bits set to 1, and the rest set to 0
    unsigned mask = ~(~0 << n);
    // extract the n rightmost bits of x
    unsigned rightmost_n_bits_of_x = x & mask;
    // shift x to the right by n positions
    // a >>= b means a = a >> b, which will be covered in section 2.10
    x >>= n;
    // shift the rightmost n bits of x to the left by the number of bits in an integer minus n positions
    // sizeof(int) returns the number of bytes in an integer
    // sizeof(int) * 8 returns the number of bits in an integer
    rightmost_n_bits_of_x <<= (sizeof(int) * 8 - n);
    // combine x and the rightmost n bits of x
    return x | rightmost_n_bits_of_x;
}