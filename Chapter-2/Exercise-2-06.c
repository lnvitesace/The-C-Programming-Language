// write a function setbits(x, p, n, y) that returns x with the n bits that begin at position p set to the rightmost n bits of y, leaving the other bits unchanged.
unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    // create a mask with n bits set to 1, and the rest set to 0
    unsigned mask = ~(~0 << n);
    // shift the mask to the position p
    // a <<= b means a = a << b, which will be covered in section 2.10
    mask <<= (p + 1 - n);
    // create a mask with n bits set to 0, and the rest set to 1
    unsigned mask2 = ~mask;
    // extract the n rightmost bits of y
    unsigned rightmost_n_bits_of_y = y & mask;
    // extract the rest bits of x
    unsigned rest_bits_of_x = x & mask2;
    // combine the rightmost n bits of y and the rest bits of x
    return rightmost_n_bits_of_y | rest_bits_of_x;
}